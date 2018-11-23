// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgCreatedSiteAdmin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OrgCreatedSiteAdmin.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Emails {

namespace {

const ::google::protobuf::Descriptor* OrgCreatedSiteAdmin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrgCreatedSiteAdmin_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_OrgCreatedSiteAdmin_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_OrgCreatedSiteAdmin_2eproto() {
  protobuf_AddDesc_OrgCreatedSiteAdmin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "OrgCreatedSiteAdmin.proto");
  GOOGLE_CHECK(file != NULL);
  OrgCreatedSiteAdmin_descriptor_ = file->message_type(0);
  static const int OrgCreatedSiteAdmin_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedSiteAdmin, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedSiteAdmin, org_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedSiteAdmin, site_admin_id_),
  };
  OrgCreatedSiteAdmin_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OrgCreatedSiteAdmin_descriptor_,
      OrgCreatedSiteAdmin::default_instance_,
      OrgCreatedSiteAdmin_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedSiteAdmin, _has_bits_[0]),
      -1,
      -1,
      sizeof(OrgCreatedSiteAdmin),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedSiteAdmin, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_OrgCreatedSiteAdmin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OrgCreatedSiteAdmin_descriptor_, &OrgCreatedSiteAdmin::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_OrgCreatedSiteAdmin_2eproto() {
  delete OrgCreatedSiteAdmin::default_instance_;
  delete OrgCreatedSiteAdmin_reflection_;
}

void protobuf_AddDesc_OrgCreatedSiteAdmin_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_OrgCreatedSiteAdmin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031OrgCreatedSiteAdmin.proto\022\"SolasMatch."
    "Common.Protobufs.Emails\032\022EmailMessage.pr"
    "oto\"\234\001\n\023OrgCreatedSiteAdmin\022^\n\nemail_typ"
    "e\030\001 \002(\01625.SolasMatch.Common.Protobufs.Em"
    "ails.EmailMessage.Type:\023OrgCreatedSiteAd"
    "min\022\016\n\006org_id\030\002 \002(\005\022\025\n\rsite_admin_id\030\003 \002"
    "(\005", 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "OrgCreatedSiteAdmin.proto", &protobuf_RegisterTypes);
  OrgCreatedSiteAdmin::default_instance_ = new OrgCreatedSiteAdmin();
  OrgCreatedSiteAdmin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OrgCreatedSiteAdmin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OrgCreatedSiteAdmin_2eproto {
  StaticDescriptorInitializer_OrgCreatedSiteAdmin_2eproto() {
    protobuf_AddDesc_OrgCreatedSiteAdmin_2eproto();
  }
} static_descriptor_initializer_OrgCreatedSiteAdmin_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OrgCreatedSiteAdmin::kEmailTypeFieldNumber;
const int OrgCreatedSiteAdmin::kOrgIdFieldNumber;
const int OrgCreatedSiteAdmin::kSiteAdminIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OrgCreatedSiteAdmin::OrgCreatedSiteAdmin()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
}

void OrgCreatedSiteAdmin::InitAsDefaultInstance() {
}

OrgCreatedSiteAdmin::OrgCreatedSiteAdmin(const OrgCreatedSiteAdmin& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
}

void OrgCreatedSiteAdmin::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 19;
  org_id_ = 0;
  site_admin_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrgCreatedSiteAdmin::~OrgCreatedSiteAdmin() {
  // @@protoc_insertion_point(destructor:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  SharedDtor();
}

void OrgCreatedSiteAdmin::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OrgCreatedSiteAdmin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrgCreatedSiteAdmin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrgCreatedSiteAdmin_descriptor_;
}

const OrgCreatedSiteAdmin& OrgCreatedSiteAdmin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrgCreatedSiteAdmin_2eproto();
  return *default_instance_;
}

OrgCreatedSiteAdmin* OrgCreatedSiteAdmin::default_instance_ = NULL;

OrgCreatedSiteAdmin* OrgCreatedSiteAdmin::New(::google::protobuf::Arena* arena) const {
  OrgCreatedSiteAdmin* n = new OrgCreatedSiteAdmin;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OrgCreatedSiteAdmin::Clear() {
// @@protoc_insertion_point(message_clear_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(OrgCreatedSiteAdmin, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<OrgCreatedSiteAdmin*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(org_id_, site_admin_id_);
    email_type_ = 19;
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool OrgCreatedSiteAdmin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgCreatedSiteAdmin];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value)) {
            set_email_type(static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_org_id;
        break;
      }

      // required int32 org_id = 2;
      case 2: {
        if (tag == 16) {
         parse_org_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &org_id_)));
          set_has_org_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_site_admin_id;
        break;
      }

      // required int32 site_admin_id = 3;
      case 3: {
        if (tag == 24) {
         parse_site_admin_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &site_admin_id_)));
          set_has_site_admin_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  return false;
#undef DO_
}

void OrgCreatedSiteAdmin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgCreatedSiteAdmin];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 org_id = 2;
  if (has_org_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->org_id(), output);
  }

  // required int32 site_admin_id = 3;
  if (has_site_admin_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->site_admin_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
}

::google::protobuf::uint8* OrgCreatedSiteAdmin::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgCreatedSiteAdmin];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 org_id = 2;
  if (has_org_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->org_id(), target);
  }

  // required int32 site_admin_id = 3;
  if (has_site_admin_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->site_admin_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  return target;
}

int OrgCreatedSiteAdmin::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  int total_size = 0;

  if (has_email_type()) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgCreatedSiteAdmin];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
  }

  if (has_org_id()) {
    // required int32 org_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->org_id());
  }

  if (has_site_admin_id()) {
    // required int32 site_admin_id = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->site_admin_id());
  }

  return total_size;
}
int OrgCreatedSiteAdmin::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgCreatedSiteAdmin];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());

    // required int32 org_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->org_id());

    // required int32 site_admin_id = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->site_admin_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OrgCreatedSiteAdmin::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OrgCreatedSiteAdmin* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OrgCreatedSiteAdmin>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
    MergeFrom(*source);
  }
}

void OrgCreatedSiteAdmin::MergeFrom(const OrgCreatedSiteAdmin& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_org_id()) {
      set_org_id(from.org_id());
    }
    if (from.has_site_admin_id()) {
      set_site_admin_id(from.site_admin_id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void OrgCreatedSiteAdmin::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrgCreatedSiteAdmin::CopyFrom(const OrgCreatedSiteAdmin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrgCreatedSiteAdmin::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void OrgCreatedSiteAdmin::Swap(OrgCreatedSiteAdmin* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OrgCreatedSiteAdmin::InternalSwap(OrgCreatedSiteAdmin* other) {
  std::swap(email_type_, other->email_type_);
  std::swap(org_id_, other->org_id_);
  std::swap(site_admin_id_, other->site_admin_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OrgCreatedSiteAdmin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrgCreatedSiteAdmin_descriptor_;
  metadata.reflection = OrgCreatedSiteAdmin_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OrgCreatedSiteAdmin

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgCreatedSiteAdmin];
bool OrgCreatedSiteAdmin::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void OrgCreatedSiteAdmin::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
void OrgCreatedSiteAdmin::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void OrgCreatedSiteAdmin::clear_email_type() {
  email_type_ = 19;
  clear_has_email_type();
}
 ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type OrgCreatedSiteAdmin::email_type() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin.email_type)
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
 void OrgCreatedSiteAdmin::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin.email_type)
}

// required int32 org_id = 2;
bool OrgCreatedSiteAdmin::has_org_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void OrgCreatedSiteAdmin::set_has_org_id() {
  _has_bits_[0] |= 0x00000002u;
}
void OrgCreatedSiteAdmin::clear_has_org_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void OrgCreatedSiteAdmin::clear_org_id() {
  org_id_ = 0;
  clear_has_org_id();
}
 ::google::protobuf::int32 OrgCreatedSiteAdmin::org_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin.org_id)
  return org_id_;
}
 void OrgCreatedSiteAdmin::set_org_id(::google::protobuf::int32 value) {
  set_has_org_id();
  org_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin.org_id)
}

// required int32 site_admin_id = 3;
bool OrgCreatedSiteAdmin::has_site_admin_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void OrgCreatedSiteAdmin::set_has_site_admin_id() {
  _has_bits_[0] |= 0x00000004u;
}
void OrgCreatedSiteAdmin::clear_has_site_admin_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void OrgCreatedSiteAdmin::clear_site_admin_id() {
  site_admin_id_ = 0;
  clear_has_site_admin_id();
}
 ::google::protobuf::int32 OrgCreatedSiteAdmin::site_admin_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin.site_admin_id)
  return site_admin_id_;
}
 void OrgCreatedSiteAdmin::set_site_admin_id(::google::protobuf::int32 value) {
  set_has_site_admin_id();
  site_admin_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.OrgCreatedSiteAdmin.site_admin_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
