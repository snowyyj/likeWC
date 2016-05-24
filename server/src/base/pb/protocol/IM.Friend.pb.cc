// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.Friend.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IM.Friend.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace IM {
namespace Friend {

void protobuf_ShutdownFile_IM_2eFriend_2eproto() {
  delete IMGetUserInfoReq::default_instance_;
  delete IMMakeFriendReq::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_IM_2eFriend_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_IM_2eFriend_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::IM::BaseDefine::protobuf_AddDesc_IM_2eBaseDefine_2eproto();
  IMGetUserInfoReq::default_instance_ = new IMGetUserInfoReq();
  IMMakeFriendReq::default_instance_ = new IMMakeFriendReq();
  IMGetUserInfoReq::default_instance_->InitAsDefaultInstance();
  IMMakeFriendReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IM_2eFriend_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_IM_2eFriend_2eproto_once_);
void protobuf_AddDesc_IM_2eFriend_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_IM_2eFriend_2eproto_once_,
                 &protobuf_AddDesc_IM_2eFriend_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IM_2eFriend_2eproto {
  StaticDescriptorInitializer_IM_2eFriend_2eproto() {
    protobuf_AddDesc_IM_2eFriend_2eproto();
  }
} static_descriptor_initializer_IM_2eFriend_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int IMGetUserInfoReq::kNickNameFieldNumber;
#endif  // !_MSC_VER

IMGetUserInfoReq::IMGetUserInfoReq()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IM.Friend.IMGetUserInfoReq)
}

void IMGetUserInfoReq::InitAsDefaultInstance() {
}

IMGetUserInfoReq::IMGetUserInfoReq(const IMGetUserInfoReq& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IM.Friend.IMGetUserInfoReq)
}

void IMGetUserInfoReq::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  nick_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IMGetUserInfoReq::~IMGetUserInfoReq() {
  // @@protoc_insertion_point(destructor:IM.Friend.IMGetUserInfoReq)
  SharedDtor();
}

void IMGetUserInfoReq::SharedDtor() {
  if (nick_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete nick_name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void IMGetUserInfoReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IMGetUserInfoReq& IMGetUserInfoReq::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_IM_2eFriend_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eFriend_2eproto();
#endif
  return *default_instance_;
}

IMGetUserInfoReq* IMGetUserInfoReq::default_instance_ = NULL;

IMGetUserInfoReq* IMGetUserInfoReq::New() const {
  return new IMGetUserInfoReq;
}

void IMGetUserInfoReq::Clear() {
  if (has_nick_name()) {
    if (nick_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      nick_name_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool IMGetUserInfoReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:IM.Friend.IMGetUserInfoReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string nick_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IM.Friend.IMGetUserInfoReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IM.Friend.IMGetUserInfoReq)
  return false;
#undef DO_
}

void IMGetUserInfoReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IM.Friend.IMGetUserInfoReq)
  // required string nick_name = 1;
  if (has_nick_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->nick_name(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:IM.Friend.IMGetUserInfoReq)
}

int IMGetUserInfoReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string nick_name = 1;
    if (has_nick_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->nick_name());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMGetUserInfoReq::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IMGetUserInfoReq*>(&from));
}

void IMGetUserInfoReq::MergeFrom(const IMGetUserInfoReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_nick_name()) {
      set_nick_name(from.nick_name());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void IMGetUserInfoReq::CopyFrom(const IMGetUserInfoReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMGetUserInfoReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void IMGetUserInfoReq::Swap(IMGetUserInfoReq* other) {
  if (other != this) {
    std::swap(nick_name_, other->nick_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IMGetUserInfoReq::GetTypeName() const {
  return "IM.Friend.IMGetUserInfoReq";
}


// ===================================================================

#ifndef _MSC_VER
const int IMMakeFriendReq::kUserAccountFieldNumber;
const int IMMakeFriendReq::kAttachMsgFieldNumber;
const int IMMakeFriendReq::kFriendPermissionFieldNumber;
#endif  // !_MSC_VER

IMMakeFriendReq::IMMakeFriendReq()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IM.Friend.IMMakeFriendReq)
}

void IMMakeFriendReq::InitAsDefaultInstance() {
}

IMMakeFriendReq::IMMakeFriendReq(const IMMakeFriendReq& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IM.Friend.IMMakeFriendReq)
}

void IMMakeFriendReq::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  user_account_ = 0u;
  attach_msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  friend_permission_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IMMakeFriendReq::~IMMakeFriendReq() {
  // @@protoc_insertion_point(destructor:IM.Friend.IMMakeFriendReq)
  SharedDtor();
}

void IMMakeFriendReq::SharedDtor() {
  if (attach_msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete attach_msg_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void IMMakeFriendReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IMMakeFriendReq& IMMakeFriendReq::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_IM_2eFriend_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eFriend_2eproto();
#endif
  return *default_instance_;
}

IMMakeFriendReq* IMMakeFriendReq::default_instance_ = NULL;

IMMakeFriendReq* IMMakeFriendReq::New() const {
  return new IMMakeFriendReq;
}

void IMMakeFriendReq::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    user_account_ = 0u;
    if (has_attach_msg()) {
      if (attach_msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        attach_msg_->clear();
      }
    }
    friend_permission_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool IMMakeFriendReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:IM.Friend.IMMakeFriendReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 user_account = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &user_account_)));
          set_has_user_account();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_attach_msg;
        break;
      }

      // required string attach_msg = 2;
      case 2: {
        if (tag == 18) {
         parse_attach_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_attach_msg()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_friend_permission;
        break;
      }

      // required .IM.BaseDefine.FriendPermission friend_permission = 3;
      case 3: {
        if (tag == 24) {
         parse_friend_permission:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::IM::BaseDefine::FriendPermission_IsValid(value)) {
            set_friend_permission(static_cast< ::IM::BaseDefine::FriendPermission >(value));
          } else {
            unknown_fields_stream.WriteVarint32(tag);
            unknown_fields_stream.WriteVarint32(value);
          }
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IM.Friend.IMMakeFriendReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IM.Friend.IMMakeFriendReq)
  return false;
#undef DO_
}

void IMMakeFriendReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IM.Friend.IMMakeFriendReq)
  // required uint32 user_account = 1;
  if (has_user_account()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->user_account(), output);
  }

  // required string attach_msg = 2;
  if (has_attach_msg()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->attach_msg(), output);
  }

  // required .IM.BaseDefine.FriendPermission friend_permission = 3;
  if (has_friend_permission()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->friend_permission(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:IM.Friend.IMMakeFriendReq)
}

int IMMakeFriendReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 user_account = 1;
    if (has_user_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->user_account());
    }

    // required string attach_msg = 2;
    if (has_attach_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->attach_msg());
    }

    // required .IM.BaseDefine.FriendPermission friend_permission = 3;
    if (has_friend_permission()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->friend_permission());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMMakeFriendReq::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IMMakeFriendReq*>(&from));
}

void IMMakeFriendReq::MergeFrom(const IMMakeFriendReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user_account()) {
      set_user_account(from.user_account());
    }
    if (from.has_attach_msg()) {
      set_attach_msg(from.attach_msg());
    }
    if (from.has_friend_permission()) {
      set_friend_permission(from.friend_permission());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void IMMakeFriendReq::CopyFrom(const IMMakeFriendReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMMakeFriendReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void IMMakeFriendReq::Swap(IMMakeFriendReq* other) {
  if (other != this) {
    std::swap(user_account_, other->user_account_);
    std::swap(attach_msg_, other->attach_msg_);
    std::swap(friend_permission_, other->friend_permission_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IMMakeFriendReq::GetTypeName() const {
  return "IM.Friend.IMMakeFriendReq";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Friend
}  // namespace IM

// @@protoc_insertion_point(global_scope)