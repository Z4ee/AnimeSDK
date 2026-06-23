#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlDownloadManager; }

#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1CA64800)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1CA64840)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA646D0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1CA64880)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1CA648B0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CA64650)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1CA648E0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1CA64A30)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1CA64A60)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1CA64A90)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1CA64AC0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1CA64AF0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1CA64940)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1CA64910)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1CA64970)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA649A0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1CA64B20)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1CA64A00)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1CA649D0)
#define SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA645E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRegisteredNonCachedStream_TypeDefinitionIndex = 1817;

	class XmlRegisteredNonCachedStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::System::String* host; // 0x30
		::System::Xml::XmlDownloadManager* downloadManager; // 0x38

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlDownloadManager* downloadManager, ::System::String* host)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlDownloadManager*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM__CTOR_OFFSET))(this, stream, downloadManager, host);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_WRITEBYTE_OFFSET))(this, value);
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

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREGISTEREDNONCACHEDSTREAM_SET_POSITION_OFFSET))(this, value);
		}
	};
}
