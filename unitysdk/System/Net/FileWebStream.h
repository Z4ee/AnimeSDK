#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/FileShare.h"
#include "unitysdk/System/IO/FileStream.h"
#include "unitysdk/System/Net/CloseExState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class FileWebRequest; }

#define SYSTEM_NET_FILEWEBSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1C8940B0)
#define SYSTEM_NET_FILEWEBSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1C894230)
#define SYSTEM_NET_FILEWEBSTREAM_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x1C893F60)
#define SYSTEM_NET_FILEWEBSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C893D70)
#define SYSTEM_NET_FILEWEBSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1C894190)
#define SYSTEM_NET_FILEWEBSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1C894310)
#define SYSTEM_NET_FILEWEBSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C893EA0)
#define SYSTEM_NET_FILEWEBSTREAM_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET UNITYSDK_OFFSET(0x1C893E10)
#define SYSTEM_NET_FILEWEBSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C893FF0)
#define SYSTEM_NET_FILEWEBSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C893CB0)
#define SYSTEM_NET_FILEWEBSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C893C10)

namespace System::Net
{
	inline static constexpr unsigned int FileWebStream_TypeDefinitionIndex = 3429;

	class FileWebStream : public ::System::IO::FileStream
	{
	public:
		::System::Net::FileWebRequest* m_request; // 0x68

		::System::Void _ctor(::System::Net::FileWebRequest* request, ::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FileWebRequest*, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM__CTOR_OFFSET))(this, request, path, mode, access, sharing);
		}

		::System::Void _ctor_1(::System::Net::FileWebRequest* request, ::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing, ::System::Int32 length, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FileWebRequest*, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM__CTOR_1_OFFSET))(this, request, path, mode, access, sharing, length, async);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CloseExState))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET))(this, closeState);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* ar)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_ENDREAD_OFFSET))(this, ar);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, callback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* ar)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_ENDWRITE_OFFSET))(this, ar);
		}

		::System::Void CheckError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_CHECKERROR_OFFSET))(this);
		}
	};
}
