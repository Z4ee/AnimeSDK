#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_FILESTREAM_READDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18715190)
#define SYSTEM_IO_FILESTREAM_READDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18715570)
#define SYSTEM_IO_FILESTREAM_READDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18716FC0)
#define SYSTEM_IO_FILESTREAM_READDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18716F40)

namespace System::IO
{
	inline static constexpr unsigned int FileStream_ReadDelegate_TypeDefinitionIndex = 715;

	class FileStream_ReadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
