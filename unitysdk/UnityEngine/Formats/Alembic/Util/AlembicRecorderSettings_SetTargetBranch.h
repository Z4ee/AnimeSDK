#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x187AFC20)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x187AFC50)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x187AF6D0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x187AF6B0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorderSettings_SetTargetBranch_TypeDefinitionIndex = 34922;

	class AlembicRecorderSettings_SetTargetBranch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_INVOKE_OFFSET))(this, go);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* go, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_BEGININVOKE_OFFSET))(this, go, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
