# 1085 : [기초-종합] 소리 파일 저장용량 계산하기

[문제 링크](https://www.codeup.kr/problem.php?id=1085)

### 분류

보기

### 문제 설명

<p>소리가 컴퓨터에 저장될 때에는 디지털 데이터화 되어 저장된다.</p>
<p>마이크를 통해 1초에 적게는 수십 번, 많게는 수만 번 소리의 강약을 체크해
그 값을 정수값으로 바꾸고,</p>
<p>그 값을 저장해 소리를 파일로 저장할 수 있다.</p>

<p>값을 저장할 때에는 비트를 사용하는 정도에 따라 세세한 녹음 정도를 결정할 수 있고,</p>
<p>좌우(스테레오) 채널로 저장하면 2배… 5.1채널이면 6배의 저장공간이 필요하고,</p>
<p>녹음 시간이 길면 그 만큼 더 많은 저장공간이 필요하다.</p>

<p>1초 동안 마이크로 소리강약을 체크하는 수를 h</p>

<p>한 번 체크한 결과를 저장하는 비트 b</p>

<p>좌우 등 소리를 저장할 트랙 개수인 채널 c</p>

<p>녹음할 시간 s가 주어질 때,</p>

<p>필요한 저장 용량을 계산하는 프로그램을 작성해보자.</p>




### 입력

<p>h, b, c, s 가 공백을 두고 입력된다.</p>
<p>h는 48,000이하, b는 32이하(단, 8의배수), c는 5이하, s는 6,000이하의 자연수이다.</p>



### 출력

<p>필요한 저장 공간을 MB 단위로 바꾸어 출력한다.</p>
<p>단, 소수점 둘째 자리에서 반올림해 첫째 자리까지 출력하고 MB를 공백을 두고 출력한다.</p>


### 입력 예시

<p>44100 16 2 10</p>

### 출력 예시

<p>1.7 MB</p>

