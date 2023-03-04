String localization() {
  return "1.02.ua";
}

String getTextDayOfWeek(byte day) {
  switch (day) {
    case 0:
      return "Понеділок";
      break;
    case 1:
      return "Вівторок";
      break;
    case 2:
      return "Середа";
      break;
    case 3:
      return "Четвер";
      break;
    case 4:
      return "П'ятниця";
      break;
    case 5:
      return "Субота";
      break;
    case 6:
      return "Неділя";
      break;
    default:
      return "Error";
  }
}

String getTextMonth(byte month) {
  switch (month) {
    case 1:
      return "Січня";
      break;
    case 2:
      return "Лютого";
      break;
    case 3:
      return "Березня";
      break;
    case 4:
      return "Квітня";
      break;
    case 5:
      return "Травня";
      break;
    case 6:
      return "Червня";
      break;
    case 7:
      return "Липня";
      break;
    case 8:
      return "Серпня";
      break;
    case 9:
      return "Вересня";
      break;
    case 10:
      return "Жовтня";
      break;
    case 11:
      return "Листопада";
      break;      
    case 12:
      return "Грудня";
      break;      
    default:
      return "Error";
  }
}

String Translate(String Text) {
  if (Text == "Visit us") return "Наш сайт";
  if (Text == "Support") return "Підтримка";

  // Debug page
  if (Text == "SYSTEM INFORMATION") return "IНФОРМАЦІЯ ПРО СИСТЕМУ";
  
  if (Text == "System version") return "Версія системи";
  if (Text == "Uptime") return "Тривалість роботи";
  if (Text == "Restart Counter") return "Лічильник перезапусків";
  if (Text == "EERPOM Counter") return "Лічильник EERPOM";
  if (Text == "Relay state") return "Стан виходів";
  if (Text == "System configuration") return "Системна конфігурація";
  if (Text == "Cycles per 10 sec") return "Кількість циклів за 10 сек";
  
  if (Text == "System time") return "Системний час";
  if (Text == "System started at") return "Система запущена о";
  if (Text == "Last syncronisation done ") return "Остання синхронізація здійснена ";
  if (Text == "ago") return "тому";
  if (Text == "Time Zone") return "Часовий пояс";
  if (Text == "DST") return "Літній час";

  if (Text == "Daylight Sensor") return "Сенсор освітлення";
  if (Text == "Activated") return "Активовано";
  if (Text == "Deactivated") return "Деактивовано";
  if (Text == "Working time") return "Робочий час";
  if (Text == "Current value") return "Поточний рівень освітлення";
  if (Text == "Transition value") return "Межа переключення";
  if (Text == "Relay Auto") return "Автоматичні виходи";
  if (Text == "Day - Not Trigered") return "День - Виключений";
  if (Text == "Night - Trigered") return "Ніч - Включений";

  if (Text == "Error") return "Помилка";
  if (Text == "error") return "помилка";
  if (Text == "warning") return "увага";

  if (Text == "Server") return "Сервер";
  if (Text == "Status") return "Стан";
  if (Text == "Connected") return "Підключено";
  if (Text == "Disconnected") return "Відключено";

  // Configuration page
  if (Text == "CONFIGURATION") return "НАЛАШТУВАННЯ";
  if (Text == "Daylight Sensor") return "Датчик освітлення";
  if (Text == "Termometers") return "Термометри";
  if (Text == "Weather forecast") return "Прогноз погоди";
  if (Text == "City identity") return "Ідентифікатор міста";
  if (Text == "Save") return "Зберегти";
  if (Text == "Discard") return "Скасувати";
  
  if (Text == "Language pack") return "Мовний пакет";	  
  if (Text == "Working mode") return "Режим роботи";	  
  if (Text == "Standalone") return "Автономний";	  
  if (Text == "Slave") return "Раб";	  
  
  // Room Namings
  if (Text == "Outdoor") return "Вулиця";	  
  if (Text == "Workshop") return "Майстерня";	  
  if (Text == "Searchlight") return "Прожектор";	  
  if (Text == "Yard") return "Подвір'я";	  
  if (Text == "Driveway") return "Заїзд";	  
  if (Text == "Garage") return "Гараж";	   
  
  if (Text == "Indoor") return "Приміщення";
  if (Text == "Corridor") return "Коридор";
  if (Text == "Kitchen") return "Кухня";
  if (Text == "Balcony") return "Балкон";
  if (Text == "Open Balcony") return "Відкритий Балкон";
  if (Text == "Cabinet") return "Кабінет";
  if (Text == "Bedroom") return "Спальня";
  if (Text == "Children Room") return "Дитяча кімната";
  if (Text == "Bathroom") return "Ванна";
  if (Text == "Toilet") return "Туалет";
  
  if (Text == "Fan") return "Вентилятор";
  if (Text == "Lamp") return "Лампа";
  if (Text == "Mirror") return "Дзеркало";

  return Text; // "Translation Error!";
}