// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserBadgeAwardedEmail.proto

#ifndef PROTOBUF_UserBadgeAwardedEmail_2eproto__INCLUDED
#define PROTOBUF_UserBadgeAwardedEmail_2eproto__INCLUDED

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
void protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
void protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto();
void protobuf_ShutdownFile_UserBadgeAwardedEmail_2eproto();

class UserBadgeAwardedEmail;

// ===================================================================

class UserBadgeAwardedEmail : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail) */ {
 public:
  UserBadgeAwardedEmail();
  virtual ~UserBadgeAwardedEmail();

  UserBadgeAwardedEmail(const UserBadgeAwardedEmail& from);

  inline UserBadgeAwardedEmail& operator=(const UserBadgeAwardedEmail& from) {
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
  static const UserBadgeAwardedEmail& default_instance();

  void Swap(UserBadgeAwardedEmail* other);

  // implements Message ----------------------------------------------

  inline UserBadgeAwardedEmail* New() const { return New(NULL); }

  UserBadgeAwardedEmail* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserBadgeAwardedEmail& from);
  void MergeFrom(const UserBadgeAwardedEmail& from);
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
  void InternalSwap(UserBadgeAwardedEmail* other);
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

  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
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

  // required int32 badge_id = 3;
  bool has_badge_id() const;
  void clear_badge_id();
  static const int kBadgeIdFieldNumber = 3;
  ::google::protobuf::int32 badge_id() const;
  void set_badge_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_badge_id();
  inline void clear_has_badge_id();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int email_type_;
  ::google::protobuf::int32 user_id_;
  ::google::protobuf::int32 badge_id_;
  friend void  protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  friend void protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto();
  friend void protobuf_ShutdownFile_UserBadgeAwardedEmail_2eproto();

  void InitAsDefaultInstance();
  static UserBadgeAwardedEmail* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UserBadgeAwardedEmail

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
inline bool UserBadgeAwardedEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserBadgeAwardedEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserBadgeAwardedEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserBadgeAwardedEmail::clear_email_type() {
  email_type_ = 22;
  clear_has_email_type();
}
inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type UserBadgeAwardedEmail::email_type() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.email_type)
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
inline void UserBadgeAwardedEmail::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.email_type)
}

// required int32 user_id = 2;
inline bool UserBadgeAwardedEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserBadgeAwardedEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserBadgeAwardedEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserBadgeAwardedEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 UserBadgeAwardedEmail::user_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.user_id)
  return user_id_;
}
inline void UserBadgeAwardedEmail::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.user_id)
}

// required int32 badge_id = 3;
inline bool UserBadgeAwardedEmail::has_badge_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserBadgeAwardedEmail::set_has_badge_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserBadgeAwardedEmail::clear_has_badge_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserBadgeAwardedEmail::clear_badge_id() {
  badge_id_ = 0;
  clear_has_badge_id();
}
inline ::google::protobuf::int32 UserBadgeAwardedEmail::badge_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.badge_id)
  return badge_id_;
}
inline void UserBadgeAwardedEmail::set_badge_id(::google::protobuf::int32 value) {
  set_has_badge_id();
  badge_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.badge_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserBadgeAwardedEmail_2eproto__INCLUDED
