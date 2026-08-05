#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DelegatedStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class QuotedPrintableStream_ReadStateInfo; }
namespace System::Net::Mime { class WriteStateInfoBase; }

#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D24E480)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D24E620)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_DECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1D24E870)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_ENCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1D24F200)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1D250B10)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_FLUSHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D24E650)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D250BD0)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GETENCODEDSTRING_OFFSET UNITYSDK_OFFSET(0x1D2508D0)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1D2508C0)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1D24E300)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1D24E360)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D250C10)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D250D50)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D24E2B0)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D24E230)

namespace System::Net::Mime
{
	inline static constexpr unsigned int QuotedPrintableStream_TypeDefinitionIndex = 3630;

	class QuotedPrintableStream : public ::System::Net::DelegatedStream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_hexDecodeMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(QuotedPrintableStream_TypeDefinitionIndex)->GetStaticField(0x36C0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_hexEncodeMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(QuotedPrintableStream_TypeDefinitionIndex)->GetStaticField(0x36C8);
		}
		// static const ::System::Int32 sizeOfSoftCRLF = 0x3; // 0x0
		// static const ::System::Int32 sizeOfEncodedChar = 0x3; // 0x0
		// static const ::System::Int32 sizeOfEncodedCRLF = 0x6; // 0x0
		// static const ::System::Int32 sizeOfNonEncodedCRLF = 0x2; // 0x0
		::System::Net::Mime::QuotedPrintableStream_ReadStateInfo* readState; // 0x38
		::System::Net::Mime::WriteStateInfoBase* writeState; // 0x40
		::System::Boolean encodeCRLF; // 0x48
		::System::Int32 lineLength; // 0x4C

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Int32 lineLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM__CTOR_OFFSET))(this, stream, lineLength);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Boolean encodeCRLF)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM__CTOR_1_OFFSET))(this, stream, encodeCRLF);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM__CCTOR_OFFSET))();
		}

		::System::Net::Mime::QuotedPrintableStream_ReadStateInfo* get_ReadState()
		{
			return ((::System::Net::Mime::QuotedPrintableStream_ReadStateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GET_READSTATE_OFFSET))(this);
		}

		::System::Net::Mime::WriteStateInfoBase* get_WriteState()
		{
			return ((::System::Net::Mime::WriteStateInfoBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GET_WRITESTATE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 DecodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_DECODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 EncodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_ENCODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::IO::Stream* GetStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GETSTREAM_OFFSET))(this);
		}

		::System::String* GetEncodedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_GETENCODEDSTRING_OFFSET))(this);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void FlushInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_FLUSHINTERNAL_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
