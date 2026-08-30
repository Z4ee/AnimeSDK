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

#define SYSTEM_NET_FILEWEBSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1B01D810)
#define SYSTEM_NET_FILEWEBSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1B01D990)
#define SYSTEM_NET_FILEWEBSTREAM_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x1B01D6C0)
#define SYSTEM_NET_FILEWEBSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B01D3B0)
#define SYSTEM_NET_FILEWEBSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1B01D8F0)
#define SYSTEM_NET_FILEWEBSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1B01DA70)
#define SYSTEM_NET_FILEWEBSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1B01D600)
#define SYSTEM_NET_FILEWEBSTREAM_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET UNITYSDK_OFFSET(0x1B01D510)
#define SYSTEM_NET_FILEWEBSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B01D750)
#define SYSTEM_NET_FILEWEBSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B01CAE0)
#define SYSTEM_NET_FILEWEBSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01BAF0)

namespace System::Net
{
	inline static constexpr unsigned int FileWebStream_TypeDefinitionIndex = 2810;

	class FileWebStream : public ::System::IO::FileStream
	{
	public:
		::System::Net::FileWebRequest* m_request; // 0x68

		::System::Void _ctor(::System::Net::FileWebRequest* a1, ::System::String* a2, ::System::IO::FileMode a3, ::System::IO::FileAccess a4, ::System::IO::FileShare a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FileWebRequest*, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::Net::FileWebRequest* a1, ::System::String* a2, ::System::IO::FileMode a3, ::System::IO::FileAccess a4, ::System::IO::FileShare a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FileWebRequest*, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CloseExState))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_SYSTEM_NET_ICLOSEEX_CLOSEEX_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Void CheckError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBSTREAM_CHECKERROR_OFFSET))(this);
		}
	};
}
