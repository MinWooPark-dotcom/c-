// switch statement
switch (score/10) {
    case 10: // score가 100인 경우 아래로 계속 진행
    case9: // 90~100
        grade = 'A';
        break;
    case8: // 80~89
        grade = 'B';
        break;
    case7: // 70~79
        grade = 'C';
        break;
    case6: // 60~69
        grade = 'D';
        break;
    default: // 그 외의 모든 경우
        grade = 'F';
    }