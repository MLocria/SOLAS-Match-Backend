// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EmailMessage.proto

#ifndef PROTOBUF_EmailMessage_2eproto__INCLUDED
#define PROTOBUF_EmailMessage_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_EmailMessage_2eproto();
void protobuf_AssignDesc_EmailMessage_2eproto();
void protobuf_ShutdownFile_EmailMessage_2eproto();

class EmailMessage;

enum EmailMessage_Type {
  EmailMessage_Type_TaskScoreEmail = 1,
  EmailMessage_Type_UserTaskClaim = 2,
  EmailMessage_Type_OrgMembershipAccepted = 3,
  EmailMessage_Type_OrgMembershipRefused = 4,
  EmailMessage_Type_PasswordResetEmail = 5,
  EmailMessage_Type_TaskArchived = 6,
  EmailMessage_Type_TaskClaimed = 7,
  EmailMessage_Type_TrackedTaskUploaded = 8,
  EmailMessage_Type_OrgTaskDeadlinePassed = 9,
  EmailMessage_Type_UserClaimedTaskDeadlinePassed = 10,
  EmailMessage_Type_UserFeedback = 11,
  EmailMessage_Type_UserTaskStreamEmail = 12,
  EmailMessage_Type_EmailVerification = 13,
  EmailMessage_Type_BannedLogin = 14,
  EmailMessage_Type_TrackedTaskSourceUpdated = 15,
  EmailMessage_Type_ClaimedTaskUploaded = 16,
  EmailMessage_Type_ClaimedTaskSourceUpdated = 17,
  EmailMessage_Type_OrgFeedback = 18,
  EmailMessage_Type_OrgCreatedSiteAdmin = 19,
  EmailMessage_Type_OrgCreatedOrgAdmin = 20,
  EmailMessage_Type_UserReferenceEmail = 21,
  EmailMessage_Type_UserBadgeAwardedEmail = 22,
  EmailMessage_Type_UserUnclaimedTask = 23,
  EmailMessage_Type_UserTaskRevokedEmail = 24,
  EmailMessage_Type_OrgTaskRevokedEmail = 25,
  EmailMessage_Type_ProjectCreated = 26
};
bool EmailMessage_Type_IsValid(int value);
const EmailMessage_Type EmailMessage_Type_Type_MIN = EmailMessage_Type_TaskScoreEmail;
const EmailMessage_Type EmailMessage_Type_Type_MAX = EmailMessage_Type_ProjectCreated;
const int EmailMessage_Type_Type_ARRAYSIZE = EmailMessage_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* EmailMessage_Type_descriptor();
inline const ::std::string& EmailMessage_Type_Name(EmailMessage_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    EmailMessage_Type_descriptor(), value);
}
inline bool EmailMessage_Type_Parse(
    const ::std::string& name, EmailMessage_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EmailMessage_Type>(
    EmailMessage_Type_descriptor(), name, value);
}
// ===================================================================

class EmailMessage : public ::google::protobuf::Message {
 public:
  EmailMessage();
  virtual ~EmailMessage();

  EmailMessage(const EmailMessage& from);

  inline EmailMessage& operator=(const EmailMessage& from) {
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
  static const EmailMessage& default_instance();

  void Swap(EmailMessage* other);

  // implements Message ----------------------------------------------

  EmailMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EmailMessage& from);
  void MergeFrom(const EmailMessage& from);
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

  typedef EmailMessage_Type Type;
  static const Type TaskScoreEmail = EmailMessage_Type_TaskScoreEmail;
  static const Type UserTaskClaim = EmailMessage_Type_UserTaskClaim;
  static const Type OrgMembershipAccepted = EmailMessage_Type_OrgMembershipAccepted;
  static const Type OrgMembershipRefused = EmailMessage_Type_OrgMembershipRefused;
  static const Type PasswordResetEmail = EmailMessage_Type_PasswordResetEmail;
  static const Type TaskArchived = EmailMessage_Type_TaskArchived;
  static const Type TaskClaimed = EmailMessage_Type_TaskClaimed;
  static const Type TrackedTaskUploaded = EmailMessage_Type_TrackedTaskUploaded;
  static const Type OrgTaskDeadlinePassed = EmailMessage_Type_OrgTaskDeadlinePassed;
  static const Type UserClaimedTaskDeadlinePassed = EmailMessage_Type_UserClaimedTaskDeadlinePassed;
  static const Type UserFeedback = EmailMessage_Type_UserFeedback;
  static const Type UserTaskStreamEmail = EmailMessage_Type_UserTaskStreamEmail;
  static const Type EmailVerification = EmailMessage_Type_EmailVerification;
  static const Type BannedLogin = EmailMessage_Type_BannedLogin;
  static const Type TrackedTaskSourceUpdated = EmailMessage_Type_TrackedTaskSourceUpdated;
  static const Type ClaimedTaskUploaded = EmailMessage_Type_ClaimedTaskUploaded;
  static const Type ClaimedTaskSourceUpdated = EmailMessage_Type_ClaimedTaskSourceUpdated;
  static const Type OrgFeedback = EmailMessage_Type_OrgFeedback;
  static const Type OrgCreatedSiteAdmin = EmailMessage_Type_OrgCreatedSiteAdmin;
  static const Type OrgCreatedOrgAdmin = EmailMessage_Type_OrgCreatedOrgAdmin;
  static const Type UserReferenceEmail = EmailMessage_Type_UserReferenceEmail;
  static const Type UserBadgeAwardedEmail = EmailMessage_Type_UserBadgeAwardedEmail;
  static const Type UserUnclaimedTask = EmailMessage_Type_UserUnclaimedTask;
  static const Type UserTaskRevokedEmail = EmailMessage_Type_UserTaskRevokedEmail;
  static const Type OrgTaskRevokedEmail = EmailMessage_Type_OrgTaskRevokedEmail;
  static const Type ProjectCreated = EmailMessage_Type_ProjectCreated;
  static inline bool Type_IsValid(int value) {
    return EmailMessage_Type_IsValid(value);
  }
  static const Type Type_MIN =
    EmailMessage_Type_Type_MIN;
  static const Type Type_MAX =
    EmailMessage_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    EmailMessage_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return EmailMessage_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return EmailMessage_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return EmailMessage_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .EmailMessage.Type email_type = 1;
  inline bool has_email_type() const;
  inline void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  inline ::EmailMessage_Type email_type() const;
  inline void set_email_type(::EmailMessage_Type value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(EmailMessage)
  // @@protoc_insertion_point(class_scope:EmailMessage)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int email_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_EmailMessage_2eproto();
  friend void protobuf_AssignDesc_EmailMessage_2eproto();
  friend void protobuf_ShutdownFile_EmailMessage_2eproto();

  void InitAsDefaultInstance();
  static EmailMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// EmailMessage

// required .EmailMessage.Type email_type = 1;
inline bool EmailMessage::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EmailMessage::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EmailMessage::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EmailMessage::clear_email_type() {
  email_type_ = 1;
  clear_has_email_type();
}
inline ::EmailMessage_Type EmailMessage::email_type() const {
  return static_cast< ::EmailMessage_Type >(email_type_);
}
inline void EmailMessage::set_email_type(::EmailMessage_Type value) {
  assert(::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EmailMessage_Type>() {
  return ::EmailMessage_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EmailMessage_2eproto__INCLUDED
