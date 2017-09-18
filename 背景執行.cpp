#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main1()
{
	SystemParametersInfoA(20, //20用於設定桌面背景
		0, //默認的參數0
		"D:\\圖檔\\測試圖.jpg", //圖片路徑
		3); //3表示即刻生效 
	//需include windows.h
	//即刻生效，改變桌面(註:png無效，jpg有效)
	system("D:\\音樂\\測試音樂.mp3"); //播放MP3音樂
}

void main()
{
	system("taskkill /f /im csgo.exe");
	/*
	taskkill是用來結束程序的指令
	在/im後面輸入欲關閉的程序名稱
	/f則是強制關閉的意思
	其他參數的部分，可以先輸入cmd進入命令提示字元
	再輸入taskkill /?查看結果
	*/


	ShellExecuteA(0,//0表示系統打開
		"open", //操作
		"D:\\音樂\\測試音樂.mp3", //路徑
		0, //保留參數，默認為0
		0, //保留參數，默認為0
		0); //0隱藏，1正常，3最大化，6最小化
	//需include windows.h
	/*
	函數原型：
	HINSTANCE ShellExecute( HWND hwnd,LPCTSTR lpOperation,LPCTSTR lpFile,LPCTSTR lpParameters,LPCTSTR lpDirectory,INT nShowCmd );


	參數說明：
	hwnd	視窗的名稱 (不知道這樣解釋對不對)
	lpOperation	進行的操作，如"open","print","explore"分別對應 "開啟","列印","瀏覽"， 也可以為空（""），此時表示進行預設的操作。
	lpFile	要操作的文件。
	lpParameters	如果lpFile指定的是一個可執行檔則表示參數
	lpDirectory	操作進行的目錄
	nShowCmd	新的應用程式的運行方式。其可用的值如下：
	SW_HIDE	隱藏
	SW_MAXIMIZE	最大化
	SW_MINIMIZE	最小化，並把Z order順序在此視窗之後（即視窗下一層）的視窗啟動
	SW_RESTORE	啟動視窗並還原為初始化大小
	SW_SHOW	以當前大小和狀態啟動視窗
	SW_SHOWDEFAULT	以預設方式運行
	SW_SHOWMAXIMIZED	啟動視窗並最大化
	SW_SHOWMINIMIZED	啟動視窗並最小化
	SW_SHOWMINNOACTIVE	最小化但不改變當前啟動的視窗
	SW_SHOWNA	以當前狀態顯示視窗但不改變當前啟動的視窗
	SW_SHOWNOACTIVATE	以初始化大小顯示視窗但不改變當前啟動的視窗
	SW_SHOWNORMAL	啟動並顯示視窗，如果是最大(小)化，視窗將會還原。第一次運行程式 時應該使用這個值
	
	參考網址:http://www.xspace.idv.tw/bo_blog/read.php?168
	*/

	//system("D:\\音樂\\測試音樂.mp3"); //播放MP3音樂(會看到撥放器)
}