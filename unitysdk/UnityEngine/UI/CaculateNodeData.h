#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/CaculateNodeData_CaculateNodeType.h"
#include "unitysdk/UnityEngine/UI/CaculateNodeData_OperateType.h"
#include "unitysdk/UnityEngine/UI/CaculateNodeData_TransfomrRefType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_CACULATENODEDATA_DESERIALIZECACULATENODETREE_OFFSET UNITYSDK_OFFSET(0x1A538660)
#define UNITYENGINE_UI_CACULATENODEDATA_GETOPVALUE_OFFSET UNITYSDK_OFFSET(0x1A537850)
#define UNITYENGINE_UI_CACULATENODEDATA_GETREFVALUE_OFFSET UNITYSDK_OFFSET(0x1A537E30)
#define UNITYENGINE_UI_CACULATENODEDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A5377C0)
#define UNITYENGINE_UI_CACULATENODEDATA_OPTOSTRING_OFFSET UNITYSDK_OFFSET(0x1A537F40)
#define UNITYENGINE_UI_CACULATENODEDATA_RECURSIVEADD_OFFSET UNITYSDK_OFFSET(0x1A5385F0)
#define UNITYENGINE_UI_CACULATENODEDATA_RECURSIVEBUILD_OFFSET UNITYSDK_OFFSET(0x1A5386A0)
#define UNITYENGINE_UI_CACULATENODEDATA_REFTOSTRING_OFFSET UNITYSDK_OFFSET(0x1A538520)
#define UNITYENGINE_UI_CACULATENODEDATA_SERIALIZECACULATENODEDATA_OFFSET UNITYSDK_OFFSET(0x1A538570)
#define UNITYENGINE_UI_CACULATENODEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A537EA0)
#define UNITYENGINE_UI_CACULATENODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A538710)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CaculateNodeData_TypeDefinitionIndex = 5631;

	class CaculateNodeData : public ::System::Object
	{
	public:
		::UnityEngine::UI::CaculateNodeData* leftNode; // 0x10
		::UnityEngine::UI::CaculateNodeData* rightNode; // 0x18
		::UnityEngine::UI::CaculateNodeData_CaculateNodeType mCaculateNodeType; // 0x20
		::UnityEngine::UI::CaculateNodeData_OperateType operateType; // 0x24
		::System::Single mValue; // 0x28
		::UnityEngine::UI::CaculateNodeData_TransfomrRefType mRectType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA__CTOR_OFFSET))(this);
		}

		::System::Single GetValue(::UnityEngine::RectTransform* transform)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_GETVALUE_OFFSET))(this, transform);
		}

		::System::Single GetOpValue(::UnityEngine::RectTransform* transform)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_GETOPVALUE_OFFSET))(this, transform);
		}

		::System::Single GetRefValue(::UnityEngine::RectTransform* mRect)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_GETREFVALUE_OFFSET))(this, mRect);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_TOSTRING_OFFSET))(this);
		}

		::System::String* OpToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_OPTOSTRING_OFFSET))(this);
		}

		static ::System::Void SerializeCaculateNodeData(::UnityEngine::UI::CaculateNodeData* data, ::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>*& mNodes)
		{
			return ((::System::Void(*)(::UnityEngine::UI::CaculateNodeData*, ::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_SERIALIZECACULATENODEDATA_OFFSET))(data, mNodes);
		}

		static ::System::Void DeserializeCaculateNodeTree(::UnityEngine::UI::CaculateNodeData*& mNodeRoot, ::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>*& mNodes)
		{
			return ((::System::Void(*)(::UnityEngine::UI::CaculateNodeData*&, ::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_DESERIALIZECACULATENODETREE_OFFSET))(mNodeRoot, mNodes);
		}

		static ::System::Void RecursiveAdd(::UnityEngine::UI::CaculateNodeData* data, ::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>* target)
		{
			return ((::System::Void(*)(::UnityEngine::UI::CaculateNodeData*, ::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_RECURSIVEADD_OFFSET))(data, target);
		}

		static ::UnityEngine::UI::CaculateNodeData* RecursiveBuild(::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>* target, ::System::Int32& index)
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_RECURSIVEBUILD_OFFSET))(target, index);
		}

		::System::String* RefToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEDATA_REFTOSTRING_OFFSET))(this);
		}
	};
}
