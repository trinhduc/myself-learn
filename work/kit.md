dmesg | grep tty
ls /dev/tty*
=========================================================
========================LoLin v3=========================
=========================================================
# Nạp firmware cho LoLin
	* Các thiết bị cần thiết
		** Kit LoLin
		** Cáp USB ( nhớ kiểm tra kỹ là cáp USB truyền được dữ liệu nhé )
	* Tải firmware từ nguồn
`wget https://github.com/nodemcu/nodemcu-firmware/releases/download/0.9.6-dev_20150704/nodemcu_integer_0.9.6-dev_20150704.bin`

	* Cài đặt esptool từ github
`git clone https://github.com/themadinventor/esptool.git`
	
	* Kiểm tra kết nối USB với lệnh
`ls /dev/tty*`
Nếu kết quả có hiển thị **/dev/ttyUSB0** tức là mạch đã được kết nối với máy tính của bạn qua USB. Nếu không hiện **/dev/ttyUSB0** thì bạn cần kiểm tra lại dây USB có thể truyền dữ liệu được không nhé, vì có dây USB chỉ dùng để cấp nguồn. Mình mắt lỗi ngớ ngẩn này, và mất cả tháng để biết vào một ngày đẹp trời, và sẽ là kinh nghiệm khó quên trong những ngày đầu làm quen với kit ^^!

	* Tiếp theo là ta sẽ load firmware vào kit, để chắn chắn bạn kiển tra lại tập tin **nodemcu_integer_0.9.6-dev_20150704.bin**, **esptool** từ github - cả hai thứ này bạn chứa vào chung một folder, và đường dẫn tới chúng và tức nhiên **dây USB** đúng chuẩn bạn nhé. Và để load firmware vào kit, chỉ cần lệnh
`sudo python **[đường dẫn tới esptool]**/esptool.py --port /dev/ttyUSB0 write_flash 0x00000 **[đường dẫn tới tập tin]**nodemcu_integer_0.9.6-dev_20150704.bin`
Chú ý phần in đậm nhé mọi người, đừng copy cả đường dẫn trên rồi past nhé, báo lỗi đó ^^!

	* Sau khi thực hiện dòng lệnh trên và enter, bạn sẽ thấy thông báo sau
```
[sudo] password for jaufranc: 
Connecting...
Erasing flash...
Writing at 0x00048000... (65 %)
```
	* Và khi thành công sẽ có thông  báo
```
Wrote 450560 bytes at 0x00000000 in 44.3 seconds (81.3 kbit/s)...

Leaving...
```
# Kiểm tra kit đã hoạt đông ?
Ở đây vì lần đầu tiên mình tiếp xúc là tìm kiếm trên mạng, và làm theo hướng dẫn và những gì mình hiểu sơ khai, nên mình dùng **minicom** để kiểm tra ^^!
	* Cài được minicom
```
sudo apt-get update
sudo apt-get install minicom
```
	* Cấu hình minicom để giao tiếp với kit

`sudo minicom -sw`

Sau khi enter, sẽ có giao diện cấu hình. Bạn sẽ **nhấn phím a** để chỉnh sửa trên port USB như ở lệnh **ls /dev/tty** bạn nhé. Rồi **Enter**

Tiếp theo **nhấn phím e** để chỉnh sửa tốc độ **baud = 9600**, rồi cũng đưa ngón tay út bé bé xinh xinh nhấn **Enter**

Sau đó, nhanh như chóp đưa ngon tay **nhấn f** để chuyển về **No** bạn nhé.

Cuối cùng di chuyển tới **Save setup as dfl** để lưu lại tác phẩm tuyện với của mình bạn hen. ah quên ** Exit from Minicom **

	* Ta sẽ cần cho phép beby USB quyền để truy cập vào kit, với

`sudo chmod 666 /dev/ttyUSB0`

	* Tiền hành chào hỏi kit nào
Bạn sẽ cần rút cáp USB ra, rồi cắm lại và thực hiện lệnh

`sudo minicom -w`

Ngây lập tức bạn sẽ nhìn thấy thông báo tương tự như sau

```
Welcome to minicom 2.7

OPTIONS: I18n 
Compiled on Feb  7 2016, 13:37:27.
Port /dev/ttyUSB0, 19:53:32

Press CTRL-A Z for help on special keys
```
Và **Enter** sẽ xuất hiện dấu ** > **, rồi bạn thực hiện dòng lệnh sau để chào làm quen với cô nàng mới của mình nhé

`print("Hello World")`

Và nếu cô ấy có cảm tình với bạn, thì cố ấy ngay lập tức sẽ..... ^_^'

`Hello World`




wifi.setmode(wifi.STATION)
wifi.sta.config("FPT Telecom-B556","banam66518")
print(wifi.sta.getip())

python home/trinhduc/Desktop/test/luatool/luatool/luatool.py --port /dev/ttyUSB0 --src /home/trinhduc/Desktop/test/init.lua --dest /home/trinhduc/Desktop/test/in
it.lua --restart


wifi.setmode(wifi.STATION)
wifi.sta.config("mywifi","mypass")


