#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_912E0458D58825D3_Class_1_E23FBD37533CCEFB.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1DEAA220)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA2C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_PairedTagGenerator_TypeDefinitionIndex = 47861;

	class UITextTagReplacer_PairedTagGenerator : public ::Class_1_912E0458D58825D3_Class_1_E23FBD37533CCEFB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::UInt16 leftToken, ::System::UInt16 rightToken, ::System::String* leftPrefix, ::System::Char wildcardEnd, ::System::String* rightTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::String*, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_PAIREDTAGGENERATOR_ADD_OFFSET))(this, leftToken, rightToken, leftPrefix, wildcardEnd, rightTag);
		}
	};
}
