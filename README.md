Demo Test: Add to Cart – Shopee Web

1. Ý tưởng : Đề tài mô phỏng quá trình add to cart trên web mua hàng trực tuyến shopee. Đảm bảo rằng user có thể thêm / bớt / cập nhật giỏ hàng đúng và đủ số lượng, giá thành sản phẩm

2. Mục tiêu
- Kiểm tra tính năng **Add to Cart** trên Shopee Web.
- Xác nhận rằng:
  + Sản phẩm được thêm đúng số lượng, đúng loại, giá thành hiển thị chính xác vào giỏ hàng.
  + Không xảy ra conflig khi add nhiều sản phẩm cùng lúc.
  
3. Sử dụng :
- vscode : viết thử chương trình add to cart để chạy testcase
- gg sheet : viết testcase
- sql server : tạo csdl

4. Phạm vi test
- các chức năng : thêm, xóa 1 sản phẩm
- các chức năng : thêm, xóa nhiều sản phẩm
- fill sản phẩm đã hết hàng
- remove sản phẩm hết date
- cập nhật giá tiền
- giao dịch hiển thị ( hiển thị đơn mua cho user trc khi bấm thanh toán )

5. Các bước thực hiện (Manual Test)
* với user :
  - mở web
  - add sản phẩm cần mua
  - chọn màu, số lượng, ..... -> thêm vào giỏ
  - chọn địa chỉ giao
  - chọn mã giảm giá ( nếu có )
  - chọn phương thức thanh toán
  - check lại trước khi đặt đơn
  - bấm đặt đơn để lưu
* với vendor :
  - ktra số lượng hàng hóa bán ra có khớp với số lượng trong hệ thống hay không.
  - ktra lượng tồn kho còn lại sau khi đơn hàng được đặt.
  - ktra liệu hàng hóa, giá bán, trạng thái đơn được cập nhật chính xác.
  - ktra hàng hóa hết date

6. testing - manual test

| Product Name        | Quantity | Expected Result                    |Actual Results                              | Status |
| ------------------- | -------- | ---------------------------------- | ------------------------------------------ | ------ |
| Vợt cầu lông Yonex  | 2        | Added to cart, total price correct | Added to cart, total price correct         | Pass   |
| Bình nước Lock&Lock | 2        | Added to cart, total price correct | Product is out of stock                    | Fail   |
| Tai nghe TWS        | 0        | Cannot add                         | Please select different payment method     | Blocked| 

=> specify the reason for Blocked - luôn chỉ ra lí do bị blocke

7. Kết quả 
- Sản phẩm được thêm vào giỏ hàng đúng số lượng.
- Giá tiền tổng hợp chính xác.
- Hệ thống hiển thị thông báo lỗi nếu thêm sản phẩm không hợp lệ.



