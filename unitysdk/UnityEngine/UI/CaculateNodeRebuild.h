#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class CaculateNodeData; }
namespace UnityEngine::UI { class TextScanner; }

#define UNITYENGINE_UI_CACULATENODEREBUILD_MERGETOPOPERATOR_OFFSET UNITYSDK_OFFSET(0x18AFDC30)
#define UNITYENGINE_UI_CACULATENODEREBUILD_PROCESS_OFFSET UNITYSDK_OFFSET(0x18AFD1D0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READCACULATENODE_OFFSET UNITYSDK_OFFSET(0x18AFD060)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READDIGITS_OFFSET UNITYSDK_OFFSET(0x18AFE180)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READNUMBER_OFFSET UNITYSDK_OFFSET(0x18AFDDD0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READOBJECT_OFFSET UNITYSDK_OFFSET(0x18AFDCF0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READOPERATOR_OFFSET UNITYSDK_OFFSET(0x18AFDB00)
#define UNITYENGINE_UI_CACULATENODEREBUILD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AFE5E0)
#define UNITYENGINE_UI_CACULATENODEREBUILD__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFE490)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CaculateNodeRebuild_TypeDefinitionIndex = 5623;

	class CaculateNodeRebuild : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::CaculateNodeRebuild** StaticGet_NodeBuilder()
		{
			return (::UnityEngine::UI::CaculateNodeRebuild**)Il2CppClass::FromTypeDefinitionIndex(CaculateNodeRebuild_TypeDefinitionIndex)->GetStaticField(0x4830);
		}
		static ::UnityEngine::UI::TextScanner** StaticGet_scanner()
		{
			return (::UnityEngine::UI::TextScanner**)Il2CppClass::FromTypeDefinitionIndex(CaculateNodeRebuild_TypeDefinitionIndex)->GetStaticField(0x4838);
		}
		::System::Text::StringBuilder* builder; // 0x10
		::System::Collections::Generic::Stack_1<::System::Int32>* mBrackets; // 0x18
		::System::Collections::Generic::Stack_1<::UnityEngine::UI::CaculateNodeData*>* mValueStack; // 0x20
		::System::Collections::Generic::Stack_1<::UnityEngine::UI::CaculateNodeData*>* mOpStack; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD__CCTOR_OFFSET))();
		}

		::UnityEngine::UI::CaculateNodeData* ReadCaculateNode(::System::String* content)
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READCACULATENODE_OFFSET))(this, content);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_PROCESS_OFFSET))(this);
		}

		::System::Void MergeTopOperator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_MERGETOPOPERATOR_OFFSET))(this);
		}

		::UnityEngine::UI::CaculateNodeData* ReadNumber()
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READNUMBER_OFFSET))(this);
		}

		::System::Void ReadDigits(::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READDIGITS_OFFSET))(this, builder);
		}

		::UnityEngine::UI::CaculateNodeData* ReadObject()
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READOBJECT_OFFSET))(this);
		}

		::UnityEngine::UI::CaculateNodeData* ReadOperator()
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READOPERATOR_OFFSET))(this);
		}
	};
}
