#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionData; }
namespace System::Threading { class ManualResetEvent; }

#define SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AFC3830)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AFC4290)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKAUTHHEADER_OFFSET UNITYSDK_OFFSET(0x1AFC28A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AFC2B20)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKRESPONSEINBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFBE750)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKWRITEOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1AFC4E20)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AFC58B0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AFC31A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AFC2D90)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AFC5080)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_FORCECOMPLETION_OFFSET UNITYSDK_OFFSET(0x1AFBE7A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AFC5EB0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AFC5EA0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AFC5ED0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_COMPLETEREQUESTWRITTEN_OFFSET UNITYSDK_OFFSET(0x1AFC2A20)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1AFC2910)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_GETRESPONSEONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AFC58A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AFC5EF0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AFC5F60)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFC2920)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_REQUESTWRITTEN_OFFSET UNITYSDK_OFFSET(0x1AFC5580)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFC2AA0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFC2A70)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFC29A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_INTERNALCLOSE_OFFSET UNITYSDK_OFFSET(0x1AFC5890)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_ISNTLMAUTH_OFFSET UNITYSDK_OFFSET(0x1AFC22C0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_KILLBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFC4280)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_READALL_OFFSET UNITYSDK_OFFSET(0x1AFC2470)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_READCALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x1AFC2FB0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AFC3640)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AFC5E00)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_1_OFFSET UNITYSDK_OFFSET(0x1AFC51B0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_OFFSET UNITYSDK_OFFSET(0x1AFC5090)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFC5E50)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AFC5FB0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFEROFFSET_OFFSET UNITYSDK_OFFSET(0x1AFC2A50)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1AFC2A60)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFC2A40)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFC2930)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1AFC2A30)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFC29B0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEASYNCCB_OFFSET UNITYSDK_OFFSET(0x1AFC3EC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITECALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x1AFC2B70)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEREQUESTASYNC_OFFSET UNITYSDK_OFFSET(0x1AFC5590)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AFC4E90)
#define SYSTEM_NET_WEBCONNECTIONSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC6000)
#define SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFBEFC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBE3F0)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionStream_TypeDefinitionIndex = 2877;

	class WebConnectionStream : public ::System::IO::Stream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_crlf()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WebConnectionStream_TypeDefinitionIndex)->GetStaticField(0x26380);
		}
		::System::Threading::ManualResetEvent* pending; // 0x28
		::System::AsyncCallback* cb_wrapper; // 0x30
		::System::Object* locker; // 0x38
		::System::IO::MemoryStream* writeBuffer; // 0x40
		::Il2CppArray<::System::Byte>* readBuffer; // 0x48
		::System::Net::HttpWebRequest* request; // 0x50
		::System::Net::WebConnection* cnc; // 0x58
		::Il2CppArray<::System::Byte>* headers; // 0x60
		::System::Int32 stream_length; // 0x68
		::System::Int32 read_timeout; // 0x6C
		::System::Int32 readBufferSize; // 0x70
		::System::Int32 write_timeout; // 0x74
		::System::Int64 totalWritten; // 0x78
		::System::Boolean headersSent; // 0x80
		::System::Boolean initRead; // 0x81
		::System::Boolean IgnoreIOErrors; // 0x82
		::System::Boolean _GetResponseOnClose_k__BackingField; // 0x83
		::System::Boolean requestWritten; // 0x84
		::System::Boolean complete_request_written; // 0x85
		::System::Boolean allowBuffering; // 0x86
		::System::Boolean sendChunked; // 0x87
		::System::Int64 totalRead; // 0x88
		::System::Int32 pendingWrites; // 0x90
		::System::Int32 readBufferOffset; // 0x94
		::System::Int64 contentLength; // 0x98
		::System::Boolean read_eof; // 0xA0
		::System::Boolean disposed; // 0xA1
		::System::Boolean nextReadCalled; // 0xA2
		::System::Boolean isRead; // 0xA3
		::System::Int32 pendingReads; // 0xA4

		::System::Void _ctor(::System::Net::WebConnection* a1, ::System::Net::WebConnectionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnection*, ::System::Net::WebConnectionData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::WebConnection* a1, ::System::Net::HttpWebRequest* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnection*, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM__CCTOR_OFFSET))();
		}

		::System::Boolean CheckAuthHeader(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKAUTHHEADER_OFFSET))(this, a1);
		}

		::System::Boolean IsNtlmAuth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_ISNTLMAUTH_OFFSET))(this);
		}

		::System::Void CheckResponseInBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKRESPONSEINBUFFER_OFFSET))(this);
		}

		::System::Net::WebConnection* get_Connection()
		{
			return ((::System::Net::WebConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CONNECTION_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READTIMEOUT_OFFSET))(this, a1);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_WRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::Boolean get_CompleteRequestWritten()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_COMPLETEREQUESTWRITTEN_OFFSET))(this);
		}

		::System::Void set_SendChunked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_SENDCHUNKED_OFFSET))(this, a1);
		}

		::System::Void set_ReadBuffer(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFER_OFFSET))(this, a1);
		}

		::System::Void set_ReadBufferOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFEROFFSET_OFFSET))(this, a1);
		}

		::System::Void set_ReadBufferSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFERSIZE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_WriteBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFER_OFFSET))(this);
		}

		::System::Int32 get_WriteBufferLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFERLENGTH_OFFSET))(this);
		}

		::System::Void ForceCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_FORCECOMPLETION_OFFSET))(this);
		}

		::System::Void CheckComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKCOMPLETE_OFFSET))(this);
		}

		::System::Void ReadAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_READALL_OFFSET))(this);
		}

		::System::Void WriteCallbackWrapper(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITECALLBACKWRAPPER_OFFSET))(this, a1);
		}

		::System::Void ReadCallbackWrapper(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_READCALLBACKWRAPPER_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Void WriteAsyncCB(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEASYNCCB_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CheckWriteOverflow(::System::Int64 a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKWRITEOVERFLOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void SetHeadersAsync(::System::Boolean a1, ::System::Net::SimpleAsyncCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetHeadersAsync_1(::System::Net::SimpleAsyncResult* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_RequestWritten()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_REQUESTWRITTEN_OFFSET))(this);
		}

		::System::Boolean WriteRequestAsync(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEREQUESTASYNC_OFFSET))(this, a1);
		}

		::System::Void InternalClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_INTERNALCLOSE_OFFSET))(this);
		}

		::System::Boolean get_GetResponseOnClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_GETRESPONSEONCLOSE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void KillBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_KILLBUFFER_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_POSITION_OFFSET))(this, a1);
		}
	};
}
