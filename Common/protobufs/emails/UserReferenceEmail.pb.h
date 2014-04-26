// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserReferenceEmail.proto

#ifndef PROTOBUF_UserReferenceEmail_2eproto__INCLUDED
#define PROTOBUF_UserReferenceEmail_2eproto__INCLUDED

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
#include "EmailMessage.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UserReferenceEmail_2eproto();
void protobuf_AssignDesc_UserReferenceEmail_2eproto();
void protobuf_ShutdownFile_UserReferenceEmail_2eproto();

class UserReferenceEmail;

// ===================================================================

class UserReferenceEmail : public ::google::protobuf::Message {
 public:
  UserReferenceEmail();
  virtual ~UserReferenceEmail();

  UserReferenceEmail(const UserReferenceEmail& from);

  inline UserReferenceEmail& operator=(const UserReferenceEmail& from) {
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
  static const UserReferenceEmail& default_instance();

  void Swap(UserReferenceEmail* other);

  // implements Message ----------------------------------------------

  UserReferenceEmail* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserReferenceEmail& from);
  void MergeFrom(const UserReferenceEmail& from);
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

  // required .EmailMessage.Type email_type = 1 [default = UserReferenceEmail];
  inline bool has_email_type() const;
  inline void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  inline ::EmailMessage_Type email_type() const;
  inline void set_email_type(::EmailMessage_Type value);

  // required int32 user_id = 2;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:UserReferenceEmail)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_user_id();
  inline void clear_has_user_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int email_type_;
  ::google::protobuf::int32 user_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_UserReferenceEmail_2eproto();
  friend void protobuf_AssignDesc_UserReferenceEmail_2eproto();
  friend void protobuf_ShutdownFile_UserReferenceEmail_2eproto();

  void InitAsDefaultInstance();
  static UserReferenceEmail* default_instance_;
};
// ===================================================================


// ===================================================================

// UserReferenceEmail

// required .EmailMessage.Type email_type = 1 [default = UserReferenceEmail];
inline bool UserReferenceEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserReferenceEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserReferenceEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserReferenceEmail::clear_email_type() {
  email_type_ = 21;
  clear_has_email_type();
}
inline ::EmailMessage_Type UserReferenceEmail::email_type() const {
  return static_cast< ::EmailMessage_Type >(email_type_);
}
inline void UserReferenceEmail::set_email_type(::EmailMessage_Type value) {
  assert(::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}

// required int32 user_id = 2;
inline bool UserReferenceEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserReferenceEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserReferenceEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserReferenceEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 UserReferenceEmail::user_id() const {
  return user_id_;
}
inline void UserReferenceEmail::set_user_id(::google::protobuf::int32 value) {
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

#endif  // PROTOBUF_UserReferenceEmail_2eproto__INCLUDED
