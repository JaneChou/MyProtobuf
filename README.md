# MyProtobuf
google protobuf协议初探

谷歌开源的Protocol Buffer，简称protobuf，是一种轻便高效的结构化数据存储格式，可以用于结构化数据序列化，且不受平台和语言的限制。
简单来说，如果你需要存储数据，且这些数据为多个程序所共享，涉及数据的传输与接收问题，需要数据的序列化与反序列化，那么protobuf就非常适合你了。
它不但可以帮你完成数据的存储，数据传输时的序列化和反序列化，并且适用于不同编程语言下的数据传输，即一个C++程序作为发送端，接收端既可以是C++程序，也可以是java程序。
你可以用定义自己ProtoBuf的数据结构，用ProtoBuf编译器生成特定语言的源代码，（如C++，Java，Python等，目前ProtoBuf对主流的编程语言都提供了支持）方便的进行序列化和反序列化。
三种修饰符

    required : 　不可以增加或删除的字段，必须初始化；
    optional : 　可选字段，可删除，可以不初始化；
    repeated : 　可重复字段， 对应到java文件里，生成的是List。

*.proto文件

eg: person.proto
package JZApp;

message Person
{
	required string id   = 1;
	required string name = 2;
	required string addr = 3;
	required string test = 1000;
}

*.proto -> c
	protoc -I=. --cpp_out=. *.proto 
	格式：protoc命令 -I路径 生成方式(这里c++)=生成文件路径 protobuf文件名    
