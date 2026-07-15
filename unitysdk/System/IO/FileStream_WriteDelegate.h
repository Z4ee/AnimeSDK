#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B857B40)
#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B857F60)
#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B858DD0)
#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B858D50)

namespace System::IO
{
	inline static constexpr unsigned int FileStream_WriteDelegate_TypeDefinitionIndex = 716;

	class FileStream_WriteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
