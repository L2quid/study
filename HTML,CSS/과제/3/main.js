        function addDate() {
            //숫자형식으로 날짜 입력받음
            var inital = document.getElementById("selectDate").value;
            //날짜 형식으로 변환
            var sday = new Date(inital);
            //num의 value를 받아옴
            var plusdays = document.getElementById("num").value;
            //둘중 하나라도 입력값이 없을때
            if (!inital || !plusdays) {
                var string = "다시 입력 해주세요."
                document.getElementById("result").innerHTML = string;
                return;
            }
            //입력받은 값을 정수로 변환시켜줌
            plusdays = parseInt(plusdays);
            //select - option 인덱스를 받아옴
            var target = document.getElementById("select");
            var value = target[target.selectedIndex].value;
            //index가 0일때 (option "주년"선택시)
            if (value == 0) {
                var option = "주년"
                var addDate = (sday.getFullYear() + plusdays) + "년" + (sday.getMonth() + 1) + "월" + sday.getDate() + "일 입니다.";
            }
            //index가 1일때 (option "일"선택시)
            else {
                var option = "일"
                sday.setDate(sday.getDate() + plusdays);
                var addDate = sday.getFullYear() + "년" + (sday.getMonth() + 1) + "월" + sday.getDate() + "일 입니다.";
            }
            var string = inital + "부터 " + plusdays + option + " 뒤는 "
            document.getElementById("result").innerHTML = string + addDate;
        }
