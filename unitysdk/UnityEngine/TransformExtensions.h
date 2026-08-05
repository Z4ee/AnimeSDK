#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_TRANSFORMEXTENSIONS_ADDCHILDFROMPREFAB_OFFSET UNITYSDK_OFFSET(0x1F1CF2A0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_GETDEEPFROMROOT_OFFSET UNITYSDK_OFFSET(0x1F1CE290)
#define UNITYENGINE_TRANSFORMEXTENSIONS_GETPATHUNTIL_OFFSET UNITYSDK_OFFSET(0x1F1D00D0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_GETPATH_OFFSET UNITYSDK_OFFSET(0x1F1CFEE0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1F1CD690)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFECREATENODE_OFFSET UNITYSDK_OFFSET(0x1F1CEA60)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1CFC00)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDALLCHILDTRANSWITHNAMERECURSIVELYINNER_OFFSET UNITYSDK_OFFSET(0x1F1CDFF0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDALLCHILDTRANSWITHNAMERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1F1CDD50)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDALLCHILDTRANSWITHNAME_OFFSET UNITYSDK_OFFSET(0x1F1CD9A0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1F1CC520)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F1CC790)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILD_1_OFFSET UNITYSDK_OFFSET(0x1F1CD210)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILD_OFFSET UNITYSDK_OFFSET(0x1F1CD010)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDDEEPCHILDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F1CC970)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDORCREATECHILDWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1F1CE470)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEGETCHILDCOUNTWITHNAME_OFFSET UNITYSDK_OFFSET(0x1F1CE730)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFEGETCHILD_OFFSET UNITYSDK_OFFSET(0x1F1CF3E0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F1CEC20)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETALLCHILDACTIVEWITHNAME_OFFSET UNITYSDK_OFFSET(0x1F1CF4E0)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETALLCHILDACTIVE_OFFSET UNITYSDK_OFFSET(0x1F1CF920)
#define UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETLOCALSCALE01_OFFSET UNITYSDK_OFFSET(0x1F1CEF10)

namespace UnityEngine
{
	inline static constexpr unsigned int TransformExtensions_TypeDefinitionIndex = 66619;

	class TransformExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* SafeFindChildGameObject(::UnityEngine::Transform* rootTrans, ::System::String* hierarchyPath, ::System::Boolean outputError)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILDGAMEOBJECT_OFFSET))(rootTrans, hierarchyPath, outputError);
		}

		static ::UnityEngine::Transform* SafeFindDeepChildTransform(::UnityEngine::Transform* rootTrans, ::System::String* aName, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDDEEPCHILDTRANSFORM_OFFSET))(rootTrans, aName, outputError);
		}

		static ::UnityEngine::Transform* SafeFindChildTransform(::UnityEngine::Transform* rootTrans, ::System::String* hierarchyPath, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILDTRANSFORM_OFFSET))(rootTrans, hierarchyPath, outputError);
		}

		static ::UnityEngine::Transform* SafeFindChild(::UnityEngine::Transform* root, ::System::String* path, ::System::Boolean includeInactive)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILD_OFFSET))(root, path, includeInactive);
		}

		static ::UnityEngine::Transform* SafeFindChild_1(::UnityEngine::Transform* parent, ::System::Int32 index, ::Il2CppArray<::System::String*>* paths)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDCHILD_1_OFFSET))(parent, index, paths);
		}

		static ::System::String* GetRelativePath(::UnityEngine::Transform* trans, ::UnityEngine::Transform* baseTransform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_GETRELATIVEPATH_OFFSET))(trans, baseTransform);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* SafeFindAllChildTransWithName(::UnityEngine::Transform* trans, ::System::String* childName, ::System::Boolean outputError)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDALLCHILDTRANSWITHNAME_OFFSET))(trans, childName, outputError);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* SafeFindAllChildTransWithNameRecursively(::UnityEngine::Transform* trans, ::System::String* childName, ::System::Boolean outputError)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDALLCHILDTRANSWITHNAMERECURSIVELY_OFFSET))(trans, childName, outputError);
		}

		static ::System::Void SafeFindAllChildTransWithNameRecursivelyInner(::UnityEngine::Transform* trans, ::System::String* childName, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* resultList)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDALLCHILDTRANSWITHNAMERECURSIVELYINNER_OFFSET))(trans, childName, resultList);
		}

		static ::System::Int32 GetDeepFromRoot(::UnityEngine::Transform* trans, ::UnityEngine::Transform* root)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_GETDEEPFROMROOT_OFFSET))(trans, root);
		}

		static ::UnityEngine::Transform* SafeFindOrCreateChildWithIndex(::UnityEngine::Transform* trans, ::System::String* childName, ::System::Int32 childIndex, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEFINDORCREATECHILDWITHINDEX_OFFSET))(trans, childName, childIndex, outputError);
		}

		static ::System::Int32 SafeGetChildCountWithName(::UnityEngine::Transform* trans, ::System::String* childName, ::System::Boolean outputError)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEGETCHILDCOUNTWITHNAME_OFFSET))(trans, childName, outputError);
		}

		static ::System::Void SafeSetActive(::UnityEngine::Transform* trans, ::System::Boolean enable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETACTIVE_OFFSET))(trans, enable, outputError);
		}

		static ::System::Void SafeSetLocalScale01(::UnityEngine::Transform* trans, ::System::Boolean enable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETLOCALSCALE01_OFFSET))(trans, enable, outputError);
		}

		static ::UnityEngine::Transform* SafeCreateNode(::UnityEngine::Transform* trans, ::UnityEngine::Transform* original, ::System::String* childName, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFECREATENODE_OFFSET))(trans, original, childName, outputError);
		}

		static ::UnityEngine::Transform* SafeGetChild(::UnityEngine::Transform* trans, ::System::Int32 index, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEGETCHILD_OFFSET))(trans, index, outputError);
		}

		static ::UnityEngine::Transform* AddChildFromPrefab(::UnityEngine::Transform* trans, ::UnityEngine::Transform* prefab, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_ADDCHILDFROMPREFAB_OFFSET))(trans, prefab, name);
		}

		static ::System::Void SafeSetAllChildActiveWithName(::UnityEngine::Transform* trans, ::System::String* childName, ::System::Boolean active, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETALLCHILDACTIVEWITHNAME_OFFSET))(trans, childName, active, outputError);
		}

		static ::System::Void SafeSetAllChildActive(::UnityEngine::Transform* trans, ::System::Boolean active, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFESETALLCHILDACTIVE_OFFSET))(trans, active, outputError);
		}

		static ::System::Void SafeDestroy(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_SAFEDESTROY_OFFSET))(trans);
		}

		static ::System::String* GetPath(::UnityEngine::Transform* transform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_GETPATH_OFFSET))(transform);
		}

		static ::System::String* GetPathUntil(::UnityEngine::Transform* transform, ::UnityEngine::GameObject* rootGameObject, ::System::Boolean include)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS_GETPATHUNTIL_OFFSET))(transform, rootGameObject, include);
		}
	};
}
