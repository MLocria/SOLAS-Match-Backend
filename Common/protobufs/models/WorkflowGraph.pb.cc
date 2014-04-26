// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WorkflowGraph.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WorkflowGraph.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* WorkflowGraph_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorkflowGraph_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_WorkflowGraph_2eproto() {
  protobuf_AddDesc_WorkflowGraph_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "WorkflowGraph.proto");
  GOOGLE_CHECK(file != NULL);
  WorkflowGraph_descriptor_ = file->message_type(0);
  static const int WorkflowGraph_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowGraph, rootnode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowGraph, projectid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowGraph, allnodes_),
  };
  WorkflowGraph_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorkflowGraph_descriptor_,
      WorkflowGraph::default_instance_,
      WorkflowGraph_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowGraph, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowGraph, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorkflowGraph));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_WorkflowGraph_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorkflowGraph_descriptor_, &WorkflowGraph::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_WorkflowGraph_2eproto() {
  delete WorkflowGraph::default_instance_;
  delete WorkflowGraph_reflection_;
}

void protobuf_AddDesc_WorkflowGraph_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_WorkflowNode_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023WorkflowGraph.proto\032\022WorkflowNode.prot"
    "o\"U\n\rWorkflowGraph\022\020\n\010rootNode\030\001 \003(\005\022\021\n\t"
    "projectId\030\002 \001(\005\022\037\n\010allNodes\030\003 \003(\0132\r.Work"
    "flowNode", 128);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "WorkflowGraph.proto", &protobuf_RegisterTypes);
  WorkflowGraph::default_instance_ = new WorkflowGraph();
  WorkflowGraph::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WorkflowGraph_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WorkflowGraph_2eproto {
  StaticDescriptorInitializer_WorkflowGraph_2eproto() {
    protobuf_AddDesc_WorkflowGraph_2eproto();
  }
} static_descriptor_initializer_WorkflowGraph_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WorkflowGraph::kRootNodeFieldNumber;
const int WorkflowGraph::kProjectIdFieldNumber;
const int WorkflowGraph::kAllNodesFieldNumber;
#endif  // !_MSC_VER

WorkflowGraph::WorkflowGraph()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void WorkflowGraph::InitAsDefaultInstance() {
}

WorkflowGraph::WorkflowGraph(const WorkflowGraph& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void WorkflowGraph::SharedCtor() {
  _cached_size_ = 0;
  projectid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorkflowGraph::~WorkflowGraph() {
  SharedDtor();
}

void WorkflowGraph::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WorkflowGraph::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorkflowGraph::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorkflowGraph_descriptor_;
}

const WorkflowGraph& WorkflowGraph::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WorkflowGraph_2eproto();
  return *default_instance_;
}

WorkflowGraph* WorkflowGraph::default_instance_ = NULL;

WorkflowGraph* WorkflowGraph::New() const {
  return new WorkflowGraph;
}

void WorkflowGraph::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    projectid_ = 0;
  }
  rootnode_.Clear();
  allnodes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorkflowGraph::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 rootNode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rootNode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_rootnode())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_rootnode())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_rootNode;
        if (input->ExpectTag(16)) goto parse_projectId;
        break;
      }

      // optional int32 projectId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_projectId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &projectid_)));
          set_has_projectid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_allNodes;
        break;
      }

      // repeated .WorkflowNode allNodes = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_allNodes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_allnodes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_allNodes;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void WorkflowGraph::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int32 rootNode = 1;
  for (int i = 0; i < this->rootnode_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->rootnode(i), output);
  }

  // optional int32 projectId = 2;
  if (has_projectid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->projectid(), output);
  }

  // repeated .WorkflowNode allNodes = 3;
  for (int i = 0; i < this->allnodes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->allnodes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* WorkflowGraph::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated int32 rootNode = 1;
  for (int i = 0; i < this->rootnode_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(1, this->rootnode(i), target);
  }

  // optional int32 projectId = 2;
  if (has_projectid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->projectid(), target);
  }

  // repeated .WorkflowNode allNodes = 3;
  for (int i = 0; i < this->allnodes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->allnodes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int WorkflowGraph::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional int32 projectId = 2;
    if (has_projectid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->projectid());
    }

  }
  // repeated int32 rootNode = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->rootnode_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->rootnode(i));
    }
    total_size += 1 * this->rootnode_size() + data_size;
  }

  // repeated .WorkflowNode allNodes = 3;
  total_size += 1 * this->allnodes_size();
  for (int i = 0; i < this->allnodes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->allnodes(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WorkflowGraph::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorkflowGraph* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorkflowGraph*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorkflowGraph::MergeFrom(const WorkflowGraph& from) {
  GOOGLE_CHECK_NE(&from, this);
  rootnode_.MergeFrom(from.rootnode_);
  allnodes_.MergeFrom(from.allnodes_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_projectid()) {
      set_projectid(from.projectid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorkflowGraph::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorkflowGraph::CopyFrom(const WorkflowGraph& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorkflowGraph::IsInitialized() const {

  for (int i = 0; i < allnodes_size(); i++) {
    if (!this->allnodes(i).IsInitialized()) return false;
  }
  return true;
}

void WorkflowGraph::Swap(WorkflowGraph* other) {
  if (other != this) {
    rootnode_.Swap(&other->rootnode_);
    std::swap(projectid_, other->projectid_);
    allnodes_.Swap(&other->allnodes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorkflowGraph::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorkflowGraph_descriptor_;
  metadata.reflection = WorkflowGraph_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
