# OCF가 안 될때

1. pkill
- 다음과 같은 명령어를 쭉 입력한다.
- pkill simpleclient
- pkill -9 simpleserver
- pkill onbording_tool

2. rm -rf
- 다음은 이걸 입력한다.
- rm -rf simpleclient_creds/
- rm -rf onbording_tool/
- rm -rf simpleserver_creds/

3. make
- 그래도 안 된다면 다음 명령어를 순차로 입력하여 make를 다시하자
- make clean
- make

4. 완전 삭제 후 다시 설치
- 그래도 안 된다면 처음부터 다시 설치 ㄱㄱ
- **01_IoTivity 설치방법** 읽기