#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class DataTableClearEventArgs; }

#define SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ED6BB30)
#define SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ED6BB70)
#define SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ED6B5A0)
#define SYSTEM_DATA_DATATABLECLEAREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6B580)

namespace System::Data
{
	inline static constexpr unsigned int DataTableClearEventHandler_TypeDefinitionIndex = 39271;

	class DataTableClearEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::DataTableClearEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::DataTableClearEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::DataTableClearEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::DataTableClearEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
