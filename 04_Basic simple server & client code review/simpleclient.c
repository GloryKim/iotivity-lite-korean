/*
Title : simpleclient code review
Editor : VisualCode(vsCode)
Author : verycosy (https://github.com/verycosy), GloryKim (https://github.com/GloryKim)
*/


/*
// Copyright (c) 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#include "oc_api.h"
#include "port/oc_clock.h"
#include <pthread.h>
#include <signal.h>
#include <stdio.h>

pthread_mutex_t mutex;
pthread_cond_t cv;
struct timespec ts;

int quit = 0;

static int
app_init(void)
{
  int ret = oc_init_platform("Apple", NULL, NULL);
  ret |= oc_add_device("/oic/d", "oic.d.phone", "Kishen's IPhone", "ocf.1.0.0",
                       "ocf.res.1.0.0", NULL, NULL);
  return ret;
}

#define MAX_URI_LENGTH (30)
static char a_light[MAX_URI_LENGTH];
static oc_endpoint_t *light_server;

static bool state;
static int power;
static oc_string_t name;

static oc_event_callback_retval_t
stop_observe(void *data)
{
  (void)data;
  PRINT("Stopping OBSERVE\n");
  oc_stop_observe(a_light, light_server);
  return OC_EVENT_DONE;
}

static void
observe_light(oc_client_response_t *data)
{
  PRINT("OBSERVE_light:\n");
  oc_rep_t *rep = data->payload;
  while (rep != NULL) {
    PRINT("key %s, value ", oc_string(rep->name));
    switch (rep->type) {
    case OC_REP_BOOL:
      PRINT("%d\n", rep->value.boolean);
      state = rep->value.boolean;
      break;
    case OC_REP_INT:
      PRINT("%lld\n", rep->value.integer);
      power = (int)rep->value.integer;
      break;
    case OC_REP_STRING:
      PRINT("%s\n", oc_string(rep->value.string));
      if (oc_string_len(name))
        oc_free_string(&name);
      oc_new_string(&name, oc_string(rep->value.string),
                    oc_string_len(rep->value.string));
      break;
    default:
      break;
    }
    rep = rep->next;
  }
}

static void
post2_light(oc_client_response_t *data)
{
  PRINT("POST2_light:\n");
  if (data->code == OC_STATUS_CHANGED)
    PRINT("POST response: CHANGED\n");
  else if (data->code == OC_STATUS_CREATED)
    PRINT("POST response: CREATED\n");
  else
    PRINT("POST response code %d\n", data->code);

  oc_do_observe(a_light, light_server, NULL, &observe_light, LOW_QOS, NULL);
  oc_set_delayed_callback(NULL, &stop_observe, 30);
  PRINT("Sent OBSERVE request\n");
}

static void
post_light(oc_client_response_t *data)
{
  PRINT("POST_light:\n");
  if (data->code == OC_STATUS_CHANGED)
    PRINT("POST response: CHANGED\n");
  else if (data->code == OC_STATUS_CREATED)
    PRINT("POST response: CREATED\n");
  else
    PRINT("POST response code %d\n", data->code);

  if (oc_init_post(a_light, light_server, NULL, &post2_light, LOW_QOS, NULL)) {
    oc_rep_start_root_object();
    oc_rep_set_boolean(root, state, true);
    oc_rep_set_int(root, power, 55);
    oc_rep_end_root_object();
    if (oc_do_post())
      PRINT("Sent POST request\n");
    else
      PRINT("Could not send POST request\n");
  } else
    PRINT("Could not init POST request\n");
}

static void
put_light(oc_client_response_t *data)
{
  PRINT("PUT_light:\n");

  if (data->code == OC_STATUS_CHANGED)
    PRINT("PUT response: CHANGED\n");
  else
    PRINT("PUT response code %d\n", data->code);

  if (oc_init_post(a_light, light_server, NULL, &post_light, LOW_QOS, NULL)) {
    oc_rep_start_root_object();
    oc_rep_set_boolean(root, state, false);
    oc_rep_set_int(root, power, 105);
    oc_rep_end_root_object();
    if (oc_do_post())
      PRINT("Sent POST request\n");
    else
      PRINT("Could not send POST request\n");
  } else
    PRINT("Could not init POST request\n");
}

static void
get_light(oc_client_response_t *data)
{//27_getlight함수이다.
  PRINT("GET_light:\n");//28_온보딩 과정에서 Get light라고 뜰텐데
  //28_그전에 나오는 글귀가 있을 것이다 .
  /*29_PRINT("Resource %s hosted at endpoints:\n", a_light);*/ // 이쪽 문구가 먼저 호출 된다.
  oc_rep_t *rep = data->payload; //30_데이터가 있지않지만 데이터가 있다면 상단에 있는 매개변수를통해서 값을 넣어준다
  //31_oc_do_get 같이 이런 api를 찾고자하면 다음 링크로 가면 된다.https://api-docs.iotivity.org/group__doc__module__tag__client__state.html#ga34d2e906ebd125b8148817f55bda4b2c
  while (rep != NULL) {
    PRINT("key %s, value ", oc_string(rep->name));
    switch (rep->type) {
    case OC_REP_BOOL:
      PRINT("%d\n", rep->value.boolean);
      state = rep->value.boolean;
      break;
    case OC_REP_INT:
      PRINT("%lld\n", rep->value.integer);
      power = (int)rep->value.integer;
      break;
    case OC_REP_STRING:
      PRINT("%s\n", oc_string(rep->value.string));
      if (oc_string_len(name))
        oc_free_string(&name);
      oc_new_string(&name, oc_string(rep->value.string),
                    oc_string_len(rep->value.string));
      break;
    default:
      break;
    }
    rep = rep->next;
  }

  if (oc_init_put(a_light, light_server, NULL, &put_light, LOW_QOS, NULL)) {
    oc_rep_start_root_object();
    oc_rep_set_boolean(root, state, true);
    oc_rep_set_int(root, power, 15);
    oc_rep_end_root_object();

    if (oc_do_put())
      PRINT("Sent PUT request\n");
    else
      PRINT("Could not send PUT request\n");
  } else
    PRINT("Could not init PUT request\n");
}

static oc_discovery_flags_t
discovery(const char *anchor, const char *uri, oc_string_array_t types, //discovery 함수
          oc_interface_mask_t iface_mask, oc_endpoint_t *endpoint,
          oc_resource_properties_t bm, void *user_data)
{
  (void)anchor;
  (void)user_data;
  (void)iface_mask;
  (void)bm;
  int i;
  int uri_len = strlen(uri);
  uri_len = (uri_len >= MAX_URI_LENGTH) ? MAX_URI_LENGTH - 1 : uri_len; //11_현재 uri의 길이를 받아서 값을 확인한다.
  for (i = 0; i < (int)oc_string_array_get_allocated_size(types); i++) { //15_API문서를 꼭 확인해서 봐야한다.
    char *t = oc_string_array_get_item(types, i);//16_t라는 포인터로 스트링 값을 가져온다.
    if (strlen(t) == 10 && strncmp(t, "core.light", 10) == 0) {//12_여기서 매우 중요한 점은 core.light는 .포함해서 총 10개의 문자열로 구성되어있는데,
    //13_여기에서 만약 core.light 대신에 glory.light를 하면 11개의 문자열이라서 10으로 적혀있는걸 전부 11로 바꿔줘야만 한다.
    //14_if (strlen(t) == 11 && strncmp(t, "glory.light", 11) == 0) {
    //17_길이가 일치할때 if 문이 구동되면서 아래의 작업이 진행된다.
      oc_endpoint_list_copy(&light_server, endpoint); //19_여기 endpoint는 light_server에 현재의 endpoint를 넣어주는 것이다.
      strncpy(a_light, uri, uri_len);
      a_light[uri_len] = '\0';
    //18_string이 널문자를 넣어줌으로써 끝낸다.
      PRINT("Resource %s hosted at endpoints:\n", a_light);
      oc_endpoint_t *ep = endpoint;
      while (ep != NULL) {
        PRINTipaddr(*ep);
        PRINT("\n");
        ep = ep->next;
      }

      oc_do_get(a_light, light_server, NULL, &get_light, LOW_QOS, NULL);//20 light_server에 요청을 보내는데 get 요청을 보낼것이다.
      //21_여기서 qos는 MQTT에서 사용하는 것인데. 3가지의 레벨이 있다. 0, 1, 2
      //22_0단계는 그냥 보낸다. 도착을 하지 않는다.
      //23_1단계는 요청이 다시 도착할 것이라는것을 보장한다.
      //24_2단계는 ack 까지 확실하게 요청에 대한 응답까지 나타낸다.
      //25_여기 CoAP에서 Qos는 2개가 있는데 High랑 Low가 있다.
      //26_즉 정리하자면 여기서 예제는 Low_QOS로 a_light인 해당 url에 light_server라는 endpoint로 get 요청을 보내는데 보낼때 get_light라는 함수를 사용할 것이야라는 것이다.
      return OC_STOP_DISCOVERY;
    }
  }
  return OC_CONTINUE_DISCOVERY;
}

//08_요청을 발행하는 부분이다.
static void
issue_requests(void)
{
  oc_do_ip_discovery("core.light", &discovery, NULL);
}//09_ip를 찾을거야 core.light라는 이것에 대해서 리소스를 찾을 것이고 찾는작업에서 discovery라는 함수를 사용할 것이다.
//10_dicovery함수에서 보면 uri가 여기에서는 "core.light" 이다.

static void
signal_event_loop(void)
{
  pthread_mutex_lock(&mutex);
  pthread_cond_signal(&cv);
  pthread_mutex_unlock(&mutex);
}

void
handle_signal(int signal)
{
  (void)signal;
  signal_event_loop();
  quit = 1;
}



//01_기본적인 Setting이 있는 OCF 기본 main이다.
int
main(void)
{
  int init;
  struct sigaction sa;
  sigfillset(&sa.sa_mask);
  sa.sa_flags = 0;
  sa.sa_handler = handle_signal;
  sigaction(SIGINT, &sa, NULL);

  static const oc_handler_t handler = { .init = app_init,//init 함수 
                                        .signal_event_loop = signal_event_loop, //event loop 돌려주는 함수
                                        .requests_entry = issue_requests };// 요청을 발행하는 것

  oc_clock_time_t next_event;



//02_환경 설정 부분이다.
#ifdef OC_STORAGE
  oc_storage_config("./simpleclient_creds");
#endif /* OC_STORAGE */

  init = oc_main_init(&handler);
  if (init < 0)//03_init 되고나서 정상적으로 실행이 안됬을 경우를 체크
    return init;

  while (quit != 1) { //04_ init이 종료가 될때 정상적인 FLAG 이다. 종료가 될때까지 계속 반복을 해주는 작업이다.
    next_event = oc_main_poll();
    pthread_mutex_lock(&mutex); //05_mutex 걸어주는 부분이다.
    if (next_event == 0) {
      pthread_cond_wait(&cv, &mutex);
    } else {
      ts.tv_sec = (next_event / OC_CLOCK_SECOND);
      ts.tv_nsec = (next_event % OC_CLOCK_SECOND) * 1.e09 / OC_CLOCK_SECOND;
      pthread_cond_timedwait(&cv, &mutex, &ts);
    }
    pthread_mutex_unlock(&mutex);
  }
  //06_요청이 전부 끝나면 전부 메모리 해제 시켜주는 부분이다.
  oc_free_server_endpoints(light_server);//07_메모리 해제 시켜주는 작업에서도 lightserver라는 endpoint에 대해서 메모리를 해제 시켜준다.
  //light_server는 동적으로 할당된다.
  oc_free_string(&name);
  oc_main_shutdown();
  return 0;
}
