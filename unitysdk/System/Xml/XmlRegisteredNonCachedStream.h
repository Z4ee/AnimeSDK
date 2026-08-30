#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlDownloadManager; }

#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x183F9B80)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x183F9C50)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183F9A10)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x183F9D20)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x183F9DC0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x183F9990)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x183F9E60)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x183FA2B0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x183FA340)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x183FA3D0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x183FA460)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x183FA4F0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x183F9FA0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x183F9EF0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x183FA030)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x183FA0D0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x183FA580)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x183FA220)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x183FA170)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x183D4000)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRegisteredNonCachedStream_TypeDefinitionIndex = 1948;

	class XmlRegisteredNonCachedStream : public ::System::IO::Stream
	{
	public:
		::System::String* host; // 0x28
		::System::Xml::XmlDownloadManager* downloadManager; // 0x30
		::System::IO::Stream* stream; // 0x38

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Xml::XmlDownloadManager* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlDownloadManager*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SET_POSITION_OFFSET))(this, a1);
		}
	};
}
