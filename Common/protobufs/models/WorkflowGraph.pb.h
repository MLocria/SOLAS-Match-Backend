// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WorkflowGraph.proto

#ifndef PROTOBUF_WorkflowGraph_2eproto__INCLUDED
#define PROTOBUF_WorkflowGraph_2eproto__INCLUDED

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
#include "WorkflowNode.pb.h"
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Models {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_WorkflowGraph_2eproto();
void protobuf_AssignDesc_WorkflowGraph_2eproto();
void protobuf_ShutdownFile_WorkflowGraph_2eproto();

class WorkflowGraph;

// ===================================================================

class WorkflowGraph : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SolasMatch.Common.Protobufs.Models.WorkflowGraph) */ {
 public:
  WorkflowGraph();
  virtual ~WorkflowGraph();

  WorkflowGraph(const WorkflowGraph& from);

  inline WorkflowGraph& operator=(const WorkflowGraph& from) {
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
  static const WorkflowGraph& default_instance();

  void Swap(WorkflowGraph* other);

  // implements Message ----------------------------------------------

  inline WorkflowGraph* New() const { return New(NULL); }

  WorkflowGraph* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WorkflowGraph& from);
  void MergeFrom(const WorkflowGraph& from);
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
  void InternalSwap(WorkflowGraph* other);
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

  // repeated int32 rootNode = 1;
  int rootnode_size() const;
  void clear_rootnode();
  static const int kRootNodeFieldNumber = 1;
  ::google::protobuf::int32 rootnode(int index) const;
  void set_rootnode(int index, ::google::protobuf::int32 value);
  void add_rootnode(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      rootnode() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_rootnode();

  // optional int32 projectId = 2;
  bool has_projectid() const;
  void clear_projectid();
  static const int kProjectIdFieldNumber = 2;
  ::google::protobuf::int32 projectid() const;
  void set_projectid(::google::protobuf::int32 value);

  // repeated .SolasMatch.Common.Protobufs.Models.WorkflowNode allNodes = 3;
  int allnodes_size() const;
  void clear_allnodes();
  static const int kAllNodesFieldNumber = 3;
  const ::SolasMatch::Common::Protobufs::Models::WorkflowNode& allnodes(int index) const;
  ::SolasMatch::Common::Protobufs::Models::WorkflowNode* mutable_allnodes(int index);
  ::SolasMatch::Common::Protobufs::Models::WorkflowNode* add_allnodes();
  ::google::protobuf::RepeatedPtrField< ::SolasMatch::Common::Protobufs::Models::WorkflowNode >*
      mutable_allnodes();
  const ::google::protobuf::RepeatedPtrField< ::SolasMatch::Common::Protobufs::Models::WorkflowNode >&
      allnodes() const;

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Models.WorkflowGraph)
 private:
  inline void set_has_projectid();
  inline void clear_has_projectid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > rootnode_;
  ::google::protobuf::RepeatedPtrField< ::SolasMatch::Common::Protobufs::Models::WorkflowNode > allnodes_;
  ::google::protobuf::int32 projectid_;
  friend void  protobuf_AddDesc_WorkflowGraph_2eproto();
  friend void protobuf_AssignDesc_WorkflowGraph_2eproto();
  friend void protobuf_ShutdownFile_WorkflowGraph_2eproto();

  void InitAsDefaultInstance();
  static WorkflowGraph* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WorkflowGraph

// repeated int32 rootNode = 1;
inline int WorkflowGraph::rootnode_size() const {
  return rootnode_.size();
}
inline void WorkflowGraph::clear_rootnode() {
  rootnode_.Clear();
}
inline ::google::protobuf::int32 WorkflowGraph::rootnode(int index) const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Models.WorkflowGraph.rootNode)
  return rootnode_.Get(index);
}
inline void WorkflowGraph::set_rootnode(int index, ::google::protobuf::int32 value) {
  rootnode_.Set(index, value);
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Models.WorkflowGraph.rootNode)
}
inline void WorkflowGraph::add_rootnode(::google::protobuf::int32 value) {
  rootnode_.Add(value);
  // @@protoc_insertion_point(field_add:SolasMatch.Common.Protobufs.Models.WorkflowGraph.rootNode)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
WorkflowGraph::rootnode() const {
  // @@protoc_insertion_point(field_list:SolasMatch.Common.Protobufs.Models.WorkflowGraph.rootNode)
  return rootnode_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
WorkflowGraph::mutable_rootnode() {
  // @@protoc_insertion_point(field_mutable_list:SolasMatch.Common.Protobufs.Models.WorkflowGraph.rootNode)
  return &rootnode_;
}

// optional int32 projectId = 2;
inline bool WorkflowGraph::has_projectid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorkflowGraph::set_has_projectid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorkflowGraph::clear_has_projectid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorkflowGraph::clear_projectid() {
  projectid_ = 0;
  clear_has_projectid();
}
inline ::google::protobuf::int32 WorkflowGraph::projectid() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Models.WorkflowGraph.projectId)
  return projectid_;
}
inline void WorkflowGraph::set_projectid(::google::protobuf::int32 value) {
  set_has_projectid();
  projectid_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Models.WorkflowGraph.projectId)
}

// repeated .SolasMatch.Common.Protobufs.Models.WorkflowNode allNodes = 3;
inline int WorkflowGraph::allnodes_size() const {
  return allnodes_.size();
}
inline void WorkflowGraph::clear_allnodes() {
  allnodes_.Clear();
}
inline const ::SolasMatch::Common::Protobufs::Models::WorkflowNode& WorkflowGraph::allnodes(int index) const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Models.WorkflowGraph.allNodes)
  return allnodes_.Get(index);
}
inline ::SolasMatch::Common::Protobufs::Models::WorkflowNode* WorkflowGraph::mutable_allnodes(int index) {
  // @@protoc_insertion_point(field_mutable:SolasMatch.Common.Protobufs.Models.WorkflowGraph.allNodes)
  return allnodes_.Mutable(index);
}
inline ::SolasMatch::Common::Protobufs::Models::WorkflowNode* WorkflowGraph::add_allnodes() {
  // @@protoc_insertion_point(field_add:SolasMatch.Common.Protobufs.Models.WorkflowGraph.allNodes)
  return allnodes_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::SolasMatch::Common::Protobufs::Models::WorkflowNode >*
WorkflowGraph::mutable_allnodes() {
  // @@protoc_insertion_point(field_mutable_list:SolasMatch.Common.Protobufs.Models.WorkflowGraph.allNodes)
  return &allnodes_;
}
inline const ::google::protobuf::RepeatedPtrField< ::SolasMatch::Common::Protobufs::Models::WorkflowNode >&
WorkflowGraph::allnodes() const {
  // @@protoc_insertion_point(field_list:SolasMatch.Common.Protobufs.Models.WorkflowGraph.allNodes)
  return allnodes_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_WorkflowGraph_2eproto__INCLUDED
