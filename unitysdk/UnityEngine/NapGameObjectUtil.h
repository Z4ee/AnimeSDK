#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_NAPGAMEOBJECTUTIL_TRAVERSEGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1C141CD0)
#define UNITYENGINE_NAPGAMEOBJECTUTIL_TRAVERSEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C141BB0)
#define UNITYENGINE_NAPGAMEOBJECTUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C141E00)

namespace UnityEngine
{
	inline static constexpr unsigned int NapGameObjectUtil_TypeDefinitionIndex = 26597;

	class NapGameObjectUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGAMEOBJECTUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void TraverseGameObject(::UnityEngine::GameObject* go, ::System::Action_1<::UnityEngine::GameObject*>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGAMEOBJECTUTIL_TRAVERSEGAMEOBJECT_OFFSET))(go, callback);
		}

		static ::System::Void TraverseGameObject_1(::UnityEngine::GameObject* go, ::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGAMEOBJECTUTIL_TRAVERSEGAMEOBJECT_1_OFFSET))(go, callback);
		}
	};
}
