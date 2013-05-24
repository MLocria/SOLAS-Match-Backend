// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgFeedback.proto

#ifndef PROTOBUF_OrgFeedback_2eproto__INCLUDED
#define PROTOBUF_OrgFeedback_2eproto__INCLUDED

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
#include "EmailMessage.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_OrgFeedback_2eproto();
void protobuf_AssignDesc_OrgFeedback_2eproto();
void protobuf_ShutdownFile_OrgFeedback_2eproto();

class OrgFeedback;

// ===================================================================

class OrgFeedback : public ::google::protobuf::Message {
 public:
  OrgFeedback();
  virtual ~OrgFeedback();
  
  OrgFeedback(const OrgFeedback& from);
  
  inline OrgFeedback& operator=(const OrgFeedback& from) {
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
  static const OrgFeedback& default_instance();
  
  void Swap(OrgFeedback* other);
  
  // implements Message ----------------------------------------------
  
  OrgFeedback* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrgFeedback& from);
  void MergeFrom(const OrgFeedback& from);
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
  
  // required .EmailMessage.Type email_type = 1 [default = OrgFeedback];
  inline bool has_email_type() const;
  inline void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  inline ::EmailMessage_Type email_type() const;
  inline void set_email_type(::EmailMessage_Type value);
  
  // required int32 task_id = 2;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 2;
  inline ::google::protobuf::int32 task_id() const;
  inline void set_task_id(::google::protobuf::int32 value);
  
  // required int32 claimant_id = 3;
  inline bool has_claimant_id() const;
  inline void clear_claimant_id();
  static const int kClaimantIdFieldNumber = 3;
  inline ::google::protobuf::int32 claimant_id() const;
  inline void set_claimant_id(::google::protobuf::int32 value);
  
  // required string feedback = 4;
  inline bool has_feedback() const;
  inline void clear_feedback();
  static const int kFeedbackFieldNumber = 4;
  inline const ::std::string& feedback() const;
  inline void set_feedback(const ::std::string& value);
  inline void set_feedback(const char* value);
  inline void set_feedback(const char* value, size_t size);
  inline ::std::string* mutable_feedback();
  inline ::std::string* release_feedback();
  
  // required int32 user_id = 5;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 5;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:OrgFeedback)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_task_id();
  inline void clear_has_task_id();
  inline void set_has_claimant_id();
  inline void clear_has_claimant_id();
  inline void set_has_feedback();
  inline void clear_has_feedback();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int email_type_;
  ::google::protobuf::int32 task_id_;
  ::std::string* feedback_;
  ::google::protobuf::int32 claimant_id_;
  ::google::protobuf::int32 user_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_OrgFeedback_2eproto();
  friend void protobuf_AssignDesc_OrgFeedback_2eproto();
  friend void protobuf_ShutdownFile_OrgFeedback_2eproto();
  
  void InitAsDefaultInstance();
  static OrgFeedback* default_instance_;
};
// ===================================================================


// ===================================================================

// OrgFeedback

// required .EmailMessage.Type email_type = 1 [default = OrgFeedback];
inline bool OrgFeedback::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OrgFeedback::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OrgFeedback::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OrgFeedback::clear_email_type() {
  email_type_ = 18;
  clear_has_email_type();
}
inline ::EmailMessage_Type OrgFeedback::email_type() const {
  return static_cast< ::EmailMessage_Type >(email_type_);
}
inline void OrgFeedback::set_email_type(::EmailMessage_Type value) {
  GOOGLE_DCHECK(::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}

// required int32 task_id = 2;
inline bool OrgFeedback::has_task_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OrgFeedback::set_has_task_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OrgFeedback::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OrgFeedback::clear_task_id() {
  task_id_ = 0;
  clear_has_task_id();
}
inline ::google::protobuf::int32 OrgFeedback::task_id() const {
  return task_id_;
}
inline void OrgFeedback::set_task_id(::google::protobuf::int32 value) {
  set_has_task_id();
  task_id_ = value;
}

// required int32 claimant_id = 3;
inline bool OrgFeedback::has_claimant_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OrgFeedback::set_has_claimant_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OrgFeedback::clear_has_claimant_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OrgFeedback::clear_claimant_id() {
  claimant_id_ = 0;
  clear_has_claimant_id();
}
inline ::google::protobuf::int32 OrgFeedback::claimant_id() const {
  return claimant_id_;
}
inline void OrgFeedback::set_claimant_id(::google::protobuf::int32 value) {
  set_has_claimant_id();
  claimant_id_ = value;
}

// required string feedback = 4;
inline bool OrgFeedback::has_feedback() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void OrgFeedback::set_has_feedback() {
  _has_bits_[0] |= 0x00000008u;
}
inline void OrgFeedback::clear_has_feedback() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void OrgFeedback::clear_feedback() {
  if (feedback_ != &::google::protobuf::internal::kEmptyString) {
    feedback_->clear();
  }
  clear_has_feedback();
}
inline const ::std::string& OrgFeedback::feedback() const {
  return *feedback_;
}
inline void OrgFeedback::set_feedback(const ::std::string& value) {
  set_has_feedback();
  if (feedback_ == &::google::protobuf::internal::kEmptyString) {
    feedback_ = new ::std::string;
  }
  feedback_->assign(value);
}
inline void OrgFeedback::set_feedback(const char* value) {
  set_has_feedback();
  if (feedback_ == &::google::protobuf::internal::kEmptyString) {
    feedback_ = new ::std::string;
  }
  feedback_->assign(value);
}
inline void OrgFeedback::set_feedback(const char* value, size_t size) {
  set_has_feedback();
  if (feedback_ == &::google::protobuf::internal::kEmptyString) {
    feedback_ = new ::std::string;
  }
  feedback_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* OrgFeedback::mutable_feedback() {
  set_has_feedback();
  if (feedback_ == &::google::protobuf::internal::kEmptyString) {
    feedback_ = new ::std::string;
  }
  return feedback_;
}
inline ::std::string* OrgFeedback::release_feedback() {
  clear_has_feedback();
  if (feedback_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = feedback_;
    feedback_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 user_id = 5;
inline bool OrgFeedback::has_user_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void OrgFeedback::set_has_user_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void OrgFeedback::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void OrgFeedback::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 OrgFeedback::user_id() const {
  return user_id_;
}
inline void OrgFeedback::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_OrgFeedback_2eproto__INCLUDED