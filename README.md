# NdeMCU_Firbase

## 해당 레포는 NodeMCU 와 Firebase 를 연동하기 위하여 제작된 코드입니다.
### NodeMCU 와 Firebase 를 연동하는 부분은 [해당레포](https://github.com/FirebaseExtended/firebase-arduino/tree/master/examples/FirebaseDemo_ESP8266)를 참조하여 구성하였습니다.

#### NodeMCU와 Firebase를 연동하는 과정에 있어 한글로된 자료가 없어 직접 찾아본 자료를 정리하기 위한 README 이니 간단하게 참조만 해주시길 부탁드리며 혹 추가적인 개선사항 또는 잘못된 부분이 있다면 PR 남겨주심 바로 반영하도록 하겠습니다.

### 셋업 과정

#### 1. [해당레포](https://github.com/FirebaseExtended/firebase-arduino/tree/master/examples/FirebaseDemo_ESP8266) 에 접속하여 FirebaseArduino library 를 다운로드 받습니다. 2. '스케치 > 라이브러리 추가 > 집라이브러리추가 > 위에서 다운로드 받은 파일 추가' 3. '예제파일 열기 > FirebaseArduino > FirebaseDemo_ESP8266.ino' No4.Firebase콘솔에 접속하여 Secret Code 와 Host를 확인후 작성합니다. 4.연결할 네트워크의 SSID 와 Password를 작성합니다. 5. 콘솔의 DATA 에 접속하여 스케치의 시리얼모니터에서 보내는 값이 잘 들어가는지 확인합니다.






