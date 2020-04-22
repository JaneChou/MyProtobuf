// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: person.proto

#ifndef PROTOBUF_person_2eproto__INCLUDED
#define PROTOBUF_person_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace JZApp {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_person_2eproto();
void protobuf_AssignDesc_person_2eproto();
void protobuf_ShutdownFile_person_2eproto();

class Person;

// ===================================================================

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  Person* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string addr = 3;
  inline bool has_addr() const;
  inline void clear_addr();
  static const int kAddrFieldNumber = 3;
  inline const ::std::string& addr() const;
  inline void set_addr(const ::std::string& value);
  inline void set_addr(const char* value);
  inline void set_addr(const char* value, size_t size);
  inline ::std::string* mutable_addr();
  inline ::std::string* release_addr();
  inline void set_allocated_addr(::std::string* addr);

  // required string test = 1000;
  inline bool has_test() const;
  inline void clear_test();
  static const int kTestFieldNumber = 1000;
  inline const ::std::string& test() const;
  inline void set_test(const ::std::string& value);
  inline void set_test(const char* value);
  inline void set_test(const char* value, size_t size);
  inline ::std::string* mutable_test();
  inline ::std::string* release_test();
  inline void set_allocated_test(::std::string* test);

  // @@protoc_insertion_point(class_scope:JZApp.Person)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_addr();
  inline void clear_has_addr();
  inline void set_has_test();
  inline void clear_has_test();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* id_;
  ::std::string* name_;
  ::std::string* addr_;
  ::std::string* test_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_person_2eproto();
  friend void protobuf_AssignDesc_person_2eproto();
  friend void protobuf_ShutdownFile_person_2eproto();

  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// ===================================================================


// ===================================================================

// Person

// required string id = 1;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& Person::id() const {
  return *id_;
}
inline void Person::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Person::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Person::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* Person::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string name = 2;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  return *name_;
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Person::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string addr = 3;
inline bool Person::has_addr() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person::set_has_addr() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person::clear_has_addr() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person::clear_addr() {
  if (addr_ != &::google::protobuf::internal::kEmptyString) {
    addr_->clear();
  }
  clear_has_addr();
}
inline const ::std::string& Person::addr() const {
  return *addr_;
}
inline void Person::set_addr(const ::std::string& value) {
  set_has_addr();
  if (addr_ == &::google::protobuf::internal::kEmptyString) {
    addr_ = new ::std::string;
  }
  addr_->assign(value);
}
inline void Person::set_addr(const char* value) {
  set_has_addr();
  if (addr_ == &::google::protobuf::internal::kEmptyString) {
    addr_ = new ::std::string;
  }
  addr_->assign(value);
}
inline void Person::set_addr(const char* value, size_t size) {
  set_has_addr();
  if (addr_ == &::google::protobuf::internal::kEmptyString) {
    addr_ = new ::std::string;
  }
  addr_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_addr() {
  set_has_addr();
  if (addr_ == &::google::protobuf::internal::kEmptyString) {
    addr_ = new ::std::string;
  }
  return addr_;
}
inline ::std::string* Person::release_addr() {
  clear_has_addr();
  if (addr_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = addr_;
    addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person::set_allocated_addr(::std::string* addr) {
  if (addr_ != &::google::protobuf::internal::kEmptyString) {
    delete addr_;
  }
  if (addr) {
    set_has_addr();
    addr_ = addr;
  } else {
    clear_has_addr();
    addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string test = 1000;
inline bool Person::has_test() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Person::set_has_test() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Person::clear_has_test() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Person::clear_test() {
  if (test_ != &::google::protobuf::internal::kEmptyString) {
    test_->clear();
  }
  clear_has_test();
}
inline const ::std::string& Person::test() const {
  return *test_;
}
inline void Person::set_test(const ::std::string& value) {
  set_has_test();
  if (test_ == &::google::protobuf::internal::kEmptyString) {
    test_ = new ::std::string;
  }
  test_->assign(value);
}
inline void Person::set_test(const char* value) {
  set_has_test();
  if (test_ == &::google::protobuf::internal::kEmptyString) {
    test_ = new ::std::string;
  }
  test_->assign(value);
}
inline void Person::set_test(const char* value, size_t size) {
  set_has_test();
  if (test_ == &::google::protobuf::internal::kEmptyString) {
    test_ = new ::std::string;
  }
  test_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_test() {
  set_has_test();
  if (test_ == &::google::protobuf::internal::kEmptyString) {
    test_ = new ::std::string;
  }
  return test_;
}
inline ::std::string* Person::release_test() {
  clear_has_test();
  if (test_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = test_;
    test_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person::set_allocated_test(::std::string* test) {
  if (test_ != &::google::protobuf::internal::kEmptyString) {
    delete test_;
  }
  if (test) {
    set_has_test();
    test_ = test;
  } else {
    clear_has_test();
    test_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace JZApp

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_person_2eproto__INCLUDED
