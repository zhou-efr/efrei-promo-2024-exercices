package com.tribu.zhou.lab4;

import java.util.Calendar;
import java.util.GregorianCalendar;

public class GregorianCalendarUseCase {
    public static void main(String[] args) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        System.out.println("YEAR : " + gregorianCalendar.YEAR + " - MONTH : " + gregorianCalendar.MONTH + " - DAY : " + gregorianCalendar.DAY_OF_MONTH);
        System.out.println("YEAR : " + Calendar.YEAR + " - MONTH : " + Calendar.MONTH + " - DAY : " + Calendar.DAY_OF_MONTH);
    }
}
