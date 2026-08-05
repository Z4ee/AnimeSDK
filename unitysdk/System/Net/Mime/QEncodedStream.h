#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DelegatedStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class QEncodedStream_ReadStateInfo; }
namespace System::Net::Mime { class WriteStateInfoBase; }

#define SYSTEM_NET_MIME_QENCODEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1E7E5C70)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E7E5E10)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_DECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1E7E5ED0)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_ENCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1E7E6860)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1E7E6E70)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_FLUSHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E7E5E80)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E7E6F30)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_GETENCODEDSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E6D60)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1E7E6D50)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1E7E5C00)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1E7E5C60)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1E7E6FA0)
#define SYSTEM_NET_MIME_QENCODEDSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E7120)
#define SYSTEM_NET_MIME_QENCODEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E5BA0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int QEncodedStream_TypeDefinitionIndex = 3627;

	class QEncodedStream : public ::System::Net::DelegatedStream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_hexDecodeMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(QEncodedStream_TypeDefinitionIndex)->GetStaticField(0x31C0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_hexEncodeMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(QEncodedStream_TypeDefinitionIndex)->GetStaticField(0x31C8);
		}
		// static const ::System::Int32 sizeOfFoldingCRLF = 0x3; // 0x0
		::System::Net::Mime::WriteStateInfoBase* writeState; // 0x38
		::System::Net::Mime::QEncodedStream_ReadStateInfo* readState; // 0x40

		::System::Void _ctor(::System::Net::Mime::WriteStateInfoBase* wsi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::WriteStateInfoBase*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM__CTOR_OFFSET))(this, wsi);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM__CCTOR_OFFSET))();
		}

		::System::Net::Mime::QEncodedStream_ReadStateInfo* get_ReadState()
		{
			return ((::System::Net::Mime::QEncodedStream_ReadStateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_GET_READSTATE_OFFSET))(this);
		}

		::System::Net::Mime::WriteStateInfoBase* get_WriteState()
		{
			return ((::System::Net::Mime::WriteStateInfoBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_GET_WRITESTATE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 DecodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_DECODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 EncodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_ENCODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::IO::Stream* GetStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_GETSTREAM_OFFSET))(this);
		}

		::System::String* GetEncodedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_GETENCODEDSTRING_OFFSET))(this);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void FlushInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_FLUSHINTERNAL_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
