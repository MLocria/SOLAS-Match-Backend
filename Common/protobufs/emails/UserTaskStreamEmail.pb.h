// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserTaskStreamEmail.proto

#ifndef PROTOBUF_UserTaskStreamEmail_2eproto__INCLUDED
#define PROTOBUF_UserTaskStreamEmail_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "EmailMessage.pb.h"
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Emails {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_UserTaskStreamEmail_2eproto();
void protobuf_AssignDesc_UserTaskStreamEmail_2eproto();
void protobuf_ShutdownFile_UserTaskStreamEmail_2eproto();

class UserTaskStreamEmail;

// ===================================================================

class UserTaskStreamEmail : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SolasMatch.Common.Protobufs.Emails.UserTaskStreamEmail) */ {
 public:
  UserTaskStreamEmail();
  virtual ~UserTaskStreamEmail();

  UserTaskStreamEmail(const UserTaskStreamEmail& from);

  inline UserTaskStreamEmail& operator=(const UserTaskStreamEmail& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserTaskStreamEmail& default_instance();

  void Swap(UserTaskStreamEmail* other);

  // implements Message ----------------------------------------------

  inline UserTaskStreamEmail* New() const { return New(NULL); }

  UserTaskStreamEmail* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserTaskStreamEmail& from);
  void MergeFrom(const UserTaskStreamEmail& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UserTaskStreamEmail* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskStreamEmail];
  bool has_email_type() const;
  void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type email_type() const;
  void set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value);

  // required int32 user_id = 2;
  bool has_user_id() const;
  void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  ::google::protobuf::int32 user_id() const;
  void set_user_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Emails.UserTaskStreamEmail)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_user_id();
  inline void clear_has_user_id();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int email_type_;
  ::google::protobuf::int32 user_id_;
  friend void  protobuf_AddDesc_UserTaskStreamEmail_2eproto();
  friend void protobuf_AssignDesc_UserTaskStreamEmail_2eproto();
  friend void protobuf_ShutdownFile_UserTaskStreamEmail_2eproto();

  void InitAsDefaultInstance();
  static UserTaskStreamEmail* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UserTaskStreamEmail

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskStreamEmail];
inline bool UserTaskStreamEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserTaskStreamEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserTaskStreamEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserTaskStreamEmail::clear_email_type() {
  email_type_ = 12;
  clear_has_email_type();
}
inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type UserTaskStreamEmail::email_type() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserTaskStreamEmail.email_type)
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
inline void UserTaskStreamEmail::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserTaskStreamEmail.email_type)
}

// required int32 user_id = 2;
inline bool UserTaskStreamEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserTaskStreamEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserTaskStreamEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserTaskStreamEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 UserTaskStreamEmail::user_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserTaskStreamEmail.user_id)
  return user_id_;
}
inline void UserTaskStreamEmail::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserTaskStreamEmail.user_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserTaskStreamEmail_2eproto__INCLUDED
