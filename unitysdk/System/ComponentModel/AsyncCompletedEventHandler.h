#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class AsyncCompletedEventArgs; }

#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6F4690)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6F46D0)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6F4100)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F40E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncCompletedEventHandler_TypeDefinitionIndex = 2812;

	class AsyncCompletedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::AsyncCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::AsyncCompletedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
