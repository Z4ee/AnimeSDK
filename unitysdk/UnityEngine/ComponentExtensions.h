#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDCONTAINSNAME_1_OFFSET UNITYSDK_OFFSET(0x1C148280)
#define UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDCONTAINSNAME_OFFSET UNITYSDK_OFFSET(0x1C147D60)
#define UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDWITHNAME_1_OFFSET UNITYSDK_OFFSET(0x1C147860)
#define UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDWITHNAME_OFFSET UNITYSDK_OFFSET(0x1C147340)
#define UNITYENGINE_COMPONENTEXTENSIONS_POSTORDERTRAVERSETRANSFORMEARLYRETURN_OFFSET UNITYSDK_OFFSET(0x1C148B00)
#define UNITYENGINE_COMPONENTEXTENSIONS_POSTORDERTRAVERSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C1487A0)
#define UNITYENGINE_COMPONENTEXTENSIONS_PREORDERTRAVERSETRANSFORMEARLYRETURN_OFFSET UNITYSDK_OFFSET(0x1C149230)
#define UNITYENGINE_COMPONENTEXTENSIONS_PREORDERTRAVERSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C148ED0)
#define UNITYENGINE_COMPONENTEXTENSIONS_SAFEFIND_OFFSET UNITYSDK_OFFSET(0x1C147070)

namespace UnityEngine
{
	inline static constexpr unsigned int ComponentExtensions_TypeDefinitionIndex = 85289;

	class ComponentExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform* SafeFind(::UnityEngine::Component* cmp, ::System::String* path)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_SAFEFIND_OFFSET))(cmp, path);
		}

		static ::UnityEngine::Transform* FindChildWithName(::UnityEngine::Transform* trans, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDWITHNAME_OFFSET))(trans, name);
		}

		static ::UnityEngine::Transform* FindChildWithName_1(::UnityEngine::Transform* trans, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDWITHNAME_1_OFFSET))(trans, name, ignoreCase);
		}

		static ::UnityEngine::Transform* FindChildContainsName(::UnityEngine::Transform* trans, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDCONTAINSNAME_OFFSET))(trans, name);
		}

		static ::UnityEngine::Transform* FindChildContainsName_1(::UnityEngine::Transform* trans, ::System::String* name, ::System::StringComparison comparison)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_FINDCHILDCONTAINSNAME_1_OFFSET))(trans, name, comparison);
		}

		static ::System::Void PostOrderTraverseTransform(::UnityEngine::Transform* self, ::System::Action_1<::UnityEngine::Transform*>* traverser)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Action_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_POSTORDERTRAVERSETRANSFORM_OFFSET))(self, traverser);
		}

		static ::System::Boolean PostOrderTraverseTransformEarlyReturn(::UnityEngine::Transform* self, ::System::Func_2<::UnityEngine::Transform*, ::System::Boolean>* traverser)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::System::Func_2<::UnityEngine::Transform*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_POSTORDERTRAVERSETRANSFORMEARLYRETURN_OFFSET))(self, traverser);
		}

		static ::System::Void PreOrderTraverseTransform(::UnityEngine::Transform* self, ::System::Action_1<::UnityEngine::Transform*>* traverser)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Action_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_PREORDERTRAVERSETRANSFORM_OFFSET))(self, traverser);
		}

		static ::System::Boolean PreOrderTraverseTransformEarlyReturn(::UnityEngine::Transform* self, ::System::Func_2<::UnityEngine::Transform*, ::System::Boolean>* traverser)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::System::Func_2<::UnityEngine::Transform*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENTEXTENSIONS_PREORDERTRAVERSETRANSFORMEARLYRETURN_OFFSET))(self, traverser);
		}
	};
}
