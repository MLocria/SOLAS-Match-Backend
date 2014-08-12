// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Badge.proto

#ifndef PROTOBUF_Badge_2eproto__INCLUDED
#define PROTOBUF_Badge_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Models {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Badge_2eproto();
void protobuf_AssignDesc_Badge_2eproto();
void protobuf_ShutdownFile_Badge_2eproto();

class Badge;

// ===================================================================

class Badge : public ::google::protobuf::Message {
 public:
  Badge();
  virtual ~Badge();
  
  Badge(const Badge& from);
  
  inline Badge& operator=(const Badge& from) {
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
  static const Badge& default_instance();
  
  void Swap(Badge* other);
  
  // implements Message ----------------------------------------------
  
  Badge* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Badge& from);
  void MergeFrom(const Badge& from);
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
  
  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // optional string title = 2;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 2;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  
  // optional string description = 3;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 3;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  
  // optional int32 owner_id = 4;
  inline bool has_owner_id() const;
  inline void clear_owner_id();
  static const int kOwnerIdFieldNumber = 4;
  inline ::google::protobuf::int32 owner_id() const;
  inline void set_owner_id(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Models.Badge)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_owner_id();
  inline void clear_has_owner_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* title_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 owner_id_;
  ::std::string* description_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_Badge_2eproto();
  friend void protobuf_AssignDesc_Badge_2eproto();
  friend void protobuf_ShutdownFile_Badge_2eproto();
  
  void InitAsDefaultInstance();
  static Badge* default_instance_;
};
// ===================================================================


// ===================================================================

// Badge

// optional int32 id = 1;
inline bool Badge::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Badge::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Badge::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Badge::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Badge::id() const {
  return id_;
}
inline void Badge::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string title = 2;
inline bool Badge::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Badge::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Badge::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Badge::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& Badge::title() const {
  return *title_;
}
inline void Badge::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void Badge::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void Badge::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Badge::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* Badge::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string description = 3;
inline bool Badge::has_description() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Badge::set_has_description() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Badge::clear_has_description() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Badge::clear_description() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& Badge::description() const {
  return *description_;
}
inline void Badge::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void Badge::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void Badge::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Badge::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  return description_;
}
inline ::std::string* Badge::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 owner_id = 4;
inline bool Badge::has_owner_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Badge::set_has_owner_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Badge::clear_has_owner_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Badge::clear_owner_id() {
  owner_id_ = 0;
  clear_has_owner_id();
}
inline ::google::protobuf::int32 Badge::owner_id() const {
  return owner_id_;
}
inline void Badge::set_owner_id(::google::protobuf::int32 value) {
  set_has_owner_id();
  owner_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Badge_2eproto__INCLUDED
