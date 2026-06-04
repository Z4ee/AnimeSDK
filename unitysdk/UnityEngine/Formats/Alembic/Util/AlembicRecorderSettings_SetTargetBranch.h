#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B04E270)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B04E2A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B04E260)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04E1F0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorderSettings_SetTargetBranch_TypeDefinitionIndex = 41576;

	class AlembicRecorderSettings_SetTargetBranch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_SETTARGETBRANCH_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
