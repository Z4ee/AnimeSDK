#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel::Design { class ComponentRenameEventArgs; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18FA8870)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18FA88B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18FA82F0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA82E0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentRenameEventHandler_TypeDefinitionIndex = 3042;

	class ComponentRenameEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::Design::ComponentRenameEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ComponentRenameEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::Design::ComponentRenameEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::Design::ComponentRenameEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
