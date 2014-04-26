// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ManagementRequest.proto

#ifndef PROTOBUF_ManagementRequest_2eproto__INCLUDED
#define PROTOBUF_ManagementRequest_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ManagementRequest_2eproto();
void protobuf_AssignDesc_ManagementRequest_2eproto();
void protobuf_ShutdownFile_ManagementRequest_2eproto();

class ManagementRequest;

// ===================================================================

class ManagementRequest : public ::google::protobuf::Message {
 public:
  ManagementRequest();
  virtual ~ManagementRequest();

  ManagementRequest(const ManagementRequest& from);

  inline ManagementRequest& operator=(const ManagementRequest& from) {
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
  static const ManagementRequest& default_instance();

  void Swap(ManagementRequest* other);

  // implements Message ----------------------------------------------

  ManagementRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ManagementRequest& from);
  void MergeFrom(const ManagementRequest& from);
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

  // required string class_name = 1;
  inline bool has_class_name() const;
  inline void clear_class_name();
  static const int kClassNameFieldNumber = 1;
  inline const ::std::string& class_name() const;
  inline void set_class_name(const ::std::string& value);
  inline void set_class_name(const char* value);
  inline void set_class_name(const char* value, size_t size);
  inline ::std::string* mutable_class_name();
  inline ::std::string* release_class_name();
  inline void set_allocated_class_name(::std::string* class_name);

  // required string response_exchange = 2;
  inline bool has_response_exchange() const;
  inline void clear_response_exchange();
  static const int kResponseExchangeFieldNumber = 2;
  inline const ::std::string& response_exchange() const;
  inline void set_response_exchange(const ::std::string& value);
  inline void set_response_exchange(const char* value);
  inline void set_response_exchange(const char* value, size_t size);
  inline ::std::string* mutable_response_exchange();
  inline ::std::string* release_response_exchange();
  inline void set_allocated_response_exchange(::std::string* response_exchange);

  // required string response_topic = 3;
  inline bool has_response_topic() const;
  inline void clear_response_topic();
  static const int kResponseTopicFieldNumber = 3;
  inline const ::std::string& response_topic() const;
  inline void set_response_topic(const ::std::string& value);
  inline void set_response_topic(const char* value);
  inline void set_response_topic(const char* value, size_t size);
  inline ::std::string* mutable_response_topic();
  inline ::std::string* release_response_topic();
  inline void set_allocated_response_topic(::std::string* response_topic);

  // @@protoc_insertion_point(class_scope:ManagementRequest)
 private:
  inline void set_has_class_name();
  inline void clear_has_class_name();
  inline void set_has_response_exchange();
  inline void clear_has_response_exchange();
  inline void set_has_response_topic();
  inline void clear_has_response_topic();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* class_name_;
  ::std::string* response_exchange_;
  ::std::string* response_topic_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_ManagementRequest_2eproto();
  friend void protobuf_AssignDesc_ManagementRequest_2eproto();
  friend void protobuf_ShutdownFile_ManagementRequest_2eproto();

  void InitAsDefaultInstance();
  static ManagementRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// ManagementRequest

// required string class_name = 1;
inline bool ManagementRequest::has_class_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ManagementRequest::set_has_class_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ManagementRequest::clear_has_class_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ManagementRequest::clear_class_name() {
  if (class_name_ != &::google::protobuf::internal::kEmptyString) {
    class_name_->clear();
  }
  clear_has_class_name();
}
inline const ::std::string& ManagementRequest::class_name() const {
  return *class_name_;
}
inline void ManagementRequest::set_class_name(const ::std::string& value) {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void ManagementRequest::set_class_name(const char* value) {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void ManagementRequest::set_class_name(const char* value, size_t size) {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ManagementRequest::mutable_class_name() {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  return class_name_;
}
inline ::std::string* ManagementRequest::release_class_name() {
  clear_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = class_name_;
    class_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ManagementRequest::set_allocated_class_name(::std::string* class_name) {
  if (class_name_ != &::google::protobuf::internal::kEmptyString) {
    delete class_name_;
  }
  if (class_name) {
    set_has_class_name();
    class_name_ = class_name;
  } else {
    clear_has_class_name();
    class_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string response_exchange = 2;
inline bool ManagementRequest::has_response_exchange() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ManagementRequest::set_has_response_exchange() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ManagementRequest::clear_has_response_exchange() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ManagementRequest::clear_response_exchange() {
  if (response_exchange_ != &::google::protobuf::internal::kEmptyString) {
    response_exchange_->clear();
  }
  clear_has_response_exchange();
}
inline const ::std::string& ManagementRequest::response_exchange() const {
  return *response_exchange_;
}
inline void ManagementRequest::set_response_exchange(const ::std::string& value) {
  set_has_response_exchange();
  if (response_exchange_ == &::google::protobuf::internal::kEmptyString) {
    response_exchange_ = new ::std::string;
  }
  response_exchange_->assign(value);
}
inline void ManagementRequest::set_response_exchange(const char* value) {
  set_has_response_exchange();
  if (response_exchange_ == &::google::protobuf::internal::kEmptyString) {
    response_exchange_ = new ::std::string;
  }
  response_exchange_->assign(value);
}
inline void ManagementRequest::set_response_exchange(const char* value, size_t size) {
  set_has_response_exchange();
  if (response_exchange_ == &::google::protobuf::internal::kEmptyString) {
    response_exchange_ = new ::std::string;
  }
  response_exchange_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ManagementRequest::mutable_response_exchange() {
  set_has_response_exchange();
  if (response_exchange_ == &::google::protobuf::internal::kEmptyString) {
    response_exchange_ = new ::std::string;
  }
  return response_exchange_;
}
inline ::std::string* ManagementRequest::release_response_exchange() {
  clear_has_response_exchange();
  if (response_exchange_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = response_exchange_;
    response_exchange_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ManagementRequest::set_allocated_response_exchange(::std::string* response_exchange) {
  if (response_exchange_ != &::google::protobuf::internal::kEmptyString) {
    delete response_exchange_;
  }
  if (response_exchange) {
    set_has_response_exchange();
    response_exchange_ = response_exchange;
  } else {
    clear_has_response_exchange();
    response_exchange_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string response_topic = 3;
inline bool ManagementRequest::has_response_topic() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ManagementRequest::set_has_response_topic() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ManagementRequest::clear_has_response_topic() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ManagementRequest::clear_response_topic() {
  if (response_topic_ != &::google::protobuf::internal::kEmptyString) {
    response_topic_->clear();
  }
  clear_has_response_topic();
}
inline const ::std::string& ManagementRequest::response_topic() const {
  return *response_topic_;
}
inline void ManagementRequest::set_response_topic(const ::std::string& value) {
  set_has_response_topic();
  if (response_topic_ == &::google::protobuf::internal::kEmptyString) {
    response_topic_ = new ::std::string;
  }
  response_topic_->assign(value);
}
inline void ManagementRequest::set_response_topic(const char* value) {
  set_has_response_topic();
  if (response_topic_ == &::google::protobuf::internal::kEmptyString) {
    response_topic_ = new ::std::string;
  }
  response_topic_->assign(value);
}
inline void ManagementRequest::set_response_topic(const char* value, size_t size) {
  set_has_response_topic();
  if (response_topic_ == &::google::protobuf::internal::kEmptyString) {
    response_topic_ = new ::std::string;
  }
  response_topic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ManagementRequest::mutable_response_topic() {
  set_has_response_topic();
  if (response_topic_ == &::google::protobuf::internal::kEmptyString) {
    response_topic_ = new ::std::string;
  }
  return response_topic_;
}
inline ::std::string* ManagementRequest::release_response_topic() {
  clear_has_response_topic();
  if (response_topic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = response_topic_;
    response_topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ManagementRequest::set_allocated_response_topic(::std::string* response_topic) {
  if (response_topic_ != &::google::protobuf::internal::kEmptyString) {
    delete response_topic_;
  }
  if (response_topic) {
    set_has_response_topic();
    response_topic_ = response_topic;
  } else {
    clear_has_response_topic();
    response_topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ManagementRequest_2eproto__INCLUDED
