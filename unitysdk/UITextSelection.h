#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class UITextSelection_UITextInfo;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UITEXTSELECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A15D870)
#define UITEXTSELECTION_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1A15EAE0)
#define UITEXTSELECTION_CHECKTEXTCHANGE_OFFSET UNITYSDK_OFFSET(0x1A15E040)
#define UITEXTSELECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A15D940)
#define UITEXTSELECTION_COLLECTALLCHANGETEXT_OFFSET UNITYSDK_OFFSET(0x1A15E6D0)
#define UITEXTSELECTION_COLLECTALLTEXT_OFFSET UNITYSDK_OFFSET(0x1A15E3E0)
#define UITEXTSELECTION_GETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0x1A15E9C0)
#define UITEXTSELECTION_SETTEXTRAWTEXT_OFFSET UNITYSDK_OFFSET(0x1A15DF30)
#define UITEXTSELECTION_START_OFFSET UNITYSDK_OFFSET(0x1A15E190)
#define UITEXTSELECTION_UPDATECHANGETEXT_OFFSET UNITYSDK_OFFSET(0x1A15E820)
#define UITEXTSELECTION_UPDATERAWTEXT_OFFSET UNITYSDK_OFFSET(0x1A15E540)
#define UITEXTSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A15E1D0)
#define UITEXTSELECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A15ECD0)
#define UITEXTSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15EB20)

inline static constexpr unsigned int UITextSelection_TypeDefinitionIndex = 80966;

class UITextSelection : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_colorTextRegex()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UITextSelection_TypeDefinitionIndex)->GetStaticField(0x44E70);
	}
	::UnityEngine::UI::Extension::UIButtonBase* btn; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UITextSelection_UITextInfo*>* textInfos; // 0x20
	::System::Boolean isPressedState; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* needUpdateText; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* ManualSetUpdateText; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UITEXTSELECTION__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_AWAKE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_CLEAR_OFFSET))(this);
	}

	::System::Void SetTextRawText(::UnityEngine::UI::Extension::UILocalizationText* text)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UITEXTSELECTION_SETTEXTRAWTEXT_OFFSET))(this, text);
	}

	::System::Void CheckTextChange(::UnityEngine::UI::Extension::UILocalizationText* text)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UITEXTSELECTION_CHECKTEXTCHANGE_OFFSET))(this, text);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_UPDATE_OFFSET))(this);
	}

	::System::Void CollectAllChangeText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_COLLECTALLCHANGETEXT_OFFSET))(this);
	}

	::System::Void CollectAllText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_COLLECTALLTEXT_OFFSET))(this);
	}

	::System::Void UpdateChangeText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_UPDATECHANGETEXT_OFFSET))(this);
	}

	::System::Void UpdateRawText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_UPDATERAWTEXT_OFFSET))(this);
	}

	::System::String* GetSimpleText(::System::String* rawText)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UITEXTSELECTION_GETSIMPLETEXT_OFFSET))(this, rawText);
	}

	::System::Void CheckState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_CHECKSTATE_OFFSET))(this);
	}
};
