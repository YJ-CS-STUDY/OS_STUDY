#  3. Processes

##  Documents

<br>

| 작성자 | 내용 | 주소 |
|:----:|:-----:|:-----:|
| 김상호 | Process Introduction| [Link]()|
| 이상훈 | fork system call code | [Link](./docs/fork%20실습.pdf)|
| 황동호 | Pipe | [Link](https://www.notion.so/PIPE-b6b78f740ab74cec9abddd483107e5be)|
| 신웅철 | Communication in Client-Server Systems | [Link](https://www.notion.so/Communication-in-Client-Server-Systems-9f3b087c434d4a9e98aa2c4dd8325d89)|
<br>

##  Summary
1. 프로세스는 실행 중인 프로그램이며 프로세스의 현재 활동 상태는 프로그램 카운터와 다른 레지스터로 나타난다.
   
2. 메모리에서 프로세스의 레이아웃은 [텍스트, 데이터, 힙, 스택] 네가지 섹션으로 표시된다.

3. 프로세스가 실행되면 상태가 변경된다. 프로세스의 일반적인 상태는 [준비, 실행, 대기, 종료] 이다.

4. 프로세스 제어 블록(PCB)은 운영체제의 프로세스를 나타내는 커널 데이터 구조이다.

5. 프로세스 스케줄러의 역할은  CPU에서 실행할 수 있는 사용 가능한 프로세스를 선택하는 것이다.

6. 운영체제는 한 프로세스 실행에서 다른 프로세스 실행으로 전환할 때 문맥 교환을 수행한다.

7. fork() 및 CreateProcess() 시스템 콜은 각각 UNIX 및  Windows 시스템에서 프로세스를 생성하는 데 사용된다.

8. 프로세스 간 통신에 공유 메모리를 사용하는 경우 두 개 이상의 프로세스가 동일한 메모리 영역을 공유한다. POSIX는 공유 메모리를 위한 API를 제공한다.

9.  파이프는 두 프로세스가 통신할 수 있는 통로를 제공한다. 일반 파이프와 지명 파이프로 나뉘며 일반 파이프는 부모-자식 관계가 있는 프로세스 간의 통신을 위해 설계되었다. 지명파이프가 더 일반적이며 여러 프로세스가 통신할 수 있다.

10. UNIX 시스템은 pipe() 시스템 콜을 통해 일반 파이프를 제공한다. 일반 파이프에는 읽기 종단과 쓰기 종단이 있다. 예를 들어, 부모 프로세스는 쓰기 종단을 사용하여 파이프로 데이터를 전송할 수 있으며 자식 프로세스는 읽기 종단에서 데이터를 읽을 수 있다. UNIX에서 지명 파이프를 FIFO라고 한다.

11. Windows 시스템도 익명 및 지명 파이프라는 두 가지 형식의 파이프를 제공한다. 익명 파이프는 UNIX 일반 파이프와 유사하다. 읻들은 단방향이며 통신 프로세스 간에 부모-자식 관계가 있어야 한다. 지명 파이프는 UNIX의 대응되는 FIFO보다 풍부한 프로세스 간 통신 방식을 제공한다.

12. 클라이언트-서버 통신의 두 가지 일반적인 형태는 소켓과 원격 프로시저 호출(RPC)이다. 소켓을 사용하면 다른 시스템의 두 프로세스가 네트워크를 통해 통신할 수 있다. RPC는 다른 컴퓨터에 있는 프로세스에서 함수를 호출할 수 있는 방식으로 함수(프로시저) 호출 개념을 추상화한다.

13. Android 운영체제는 바인더 프레임워크를 사용하여 프로세스 간 통신의 형태로 RPC를 사용한다.



--------------------------------------
<br>

##   Questions


<br>

|Question|Answer|
|--------------|--------------|
|1. Message Passing의 경우 OS가 개입해서 message를 전달해주는 시스템을 형성해준다는데, Shared Memory의 경우에도 공유 메모리 공간을 OS가 개입해서 만드는데, 무슨 의미로 유난히 Message Passing에만 '개입'이라는 단어를 사용한걸까? ?| [Link]()|
|2. 3.32_process_creation6.c 부분을 설명하시면서 이 코드에 대한 결과값으로 pid가 30개가 출력이 되더라구요.. 강사님께서도 예상하는 갯수랑 다를거다 이런식으로 말씀하셔서 왜 저희가 생각한대로의 갯수가 출력되지 않는지 아시는 분 있으시면 설명 부탁드립니다!
 <img src="../static/images/process_img1.PNG" alt="My Image" width="450" height="200"> | [Link](https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=wndrlf2003&logNo=70187577389) |
|3. 스택(Stack), 힙(Heap), 데이터(Data)영역 | [Link](https://dsnight.tistory.com/50) |
