#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Diagnostics { class EntryWrittenEventArgs; }

#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A31A130)
#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A31A170)
#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A31A0F0)
#define SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31A0B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EntryWrittenEventHandler_TypeDefinitionIndex = 4095;

	class EntryWrittenEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Diagnostics::EntryWrittenEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Diagnostics::EntryWrittenEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Diagnostics::EntryWrittenEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Diagnostics::EntryWrittenEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENTRYWRITTENEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
