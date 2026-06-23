#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPENDCRLF_OFFSET UNITYSDK_OFFSET(0x1BEDECD0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPENDFOOTER_OFFSET UNITYSDK_OFFSET(0x1BEDF6A0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0x1BEDF6C0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1BEDEDC0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPEND_OFFSET UNITYSDK_OFFSET(0x1BEDEBF0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_BUFFERFLUSHED_OFFSET UNITYSDK_OFFSET(0x1BEDF1D0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_ENSURESPACEINBUFFER_OFFSET UNITYSDK_OFFSET(0x1BEDF600)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1BEDF5D0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_CURRENTLINELENGTH_OFFSET UNITYSDK_OFFSET(0x1BEDF5F0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_FOOTERLENGTH_OFFSET UNITYSDK_OFFSET(0x1BEDF590)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_FOOTER_OFFSET UNITYSDK_OFFSET(0x1BEDF5B0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_HEADER_OFFSET UNITYSDK_OFFSET(0x1BEDF5C0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1BEDF5E0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_MAXLINELENGTH_OFFSET UNITYSDK_OFFSET(0x1BEDF6E0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1BEDF6F0)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEDCB10)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BEDF510)
#define SYSTEM_NET_MIME_WRITESTATEINFOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDF490)

namespace System::Net::Mime
{
	inline static constexpr unsigned int WriteStateInfoBase_TypeDefinitionIndex = 3635;

	class WriteStateInfoBase : public ::System::Object
	{
	public:
		// static const ::System::Int32 defaultBufferSize = 0x400; // 0x0
		::Il2CppArray<::System::Byte>* _header; // 0x10
		::Il2CppArray<::System::Byte>* _footer; // 0x18
		::Il2CppArray<::System::Byte>* buffer; // 0x20
		::System::Int32 _currentLineLength; // 0x28
		::System::Int32 _currentBufferUsed; // 0x2C
		::System::Int32 _maxLineLength; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 bufferSize, ::Il2CppArray<::System::Byte>* header, ::Il2CppArray<::System::Byte>* footer, ::System::Int32 maxLineLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE__CTOR_1_OFFSET))(this, bufferSize, header, footer, maxLineLength);
		}

		::System::Void _ctor_2(::System::Int32 bufferSize, ::Il2CppArray<::System::Byte>* header, ::Il2CppArray<::System::Byte>* footer, ::System::Int32 maxLineLength, ::System::Int32 mimeHeaderLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE__CTOR_2_OFFSET))(this, bufferSize, header, footer, maxLineLength, mimeHeaderLength);
		}

		::System::Int32 get_FooterLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_FOOTERLENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Footer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_FOOTER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Header()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_HEADER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_BUFFER_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_CurrentLineLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_CURRENTLINELENGTH_OFFSET))(this);
		}

		::System::Void EnsureSpaceInBuffer(::System::Int32 moreBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_ENSURESPACEINBUFFER_OFFSET))(this, moreBytes);
		}

		::System::Void Append(::System::Byte aByte)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPEND_OFFSET))(this, aByte);
		}

		::System::Void Append_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPEND_1_OFFSET))(this, bytes);
		}

		::System::Void AppendCRLF(::System::Boolean includeSpace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPENDCRLF_OFFSET))(this, includeSpace);
		}

		::System::Void AppendHeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPENDHEADER_OFFSET))(this);
		}

		::System::Void AppendFooter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_APPENDFOOTER_OFFSET))(this);
		}

		::System::Int32 get_MaxLineLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_GET_MAXLINELENGTH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_RESET_OFFSET))(this);
		}

		::System::Void BufferFlushed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_WRITESTATEINFOBASE_BUFFERFLUSHED_OFFSET))(this);
		}
	};
}
