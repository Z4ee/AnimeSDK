#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MaskedTextProvider_CaseConversion.h"
#include "unitysdk/System/ComponentModel/MaskedTextProvider_CharType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CHARDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18FAA550)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CHARDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAA540)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MaskedTextProvider_CharDescriptor_TypeDefinitionIndex = 2948;

	class MaskedTextProvider_CharDescriptor : public ::System::Object
	{
	public:
		::System::ComponentModel::MaskedTextProvider_CaseConversion CaseConversion; // 0x10
		::System::ComponentModel::MaskedTextProvider_CharType CharType; // 0x14
		::System::Boolean IsAssigned; // 0x18
		::System::Int32 MaskPosition; // 0x1C

		::System::Void _ctor(::System::Int32 maskPos, ::System::ComponentModel::MaskedTextProvider_CharType charType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ComponentModel::MaskedTextProvider_CharType))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CHARDESCRIPTOR__CTOR_OFFSET))(this, maskPos, charType);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CHARDESCRIPTOR_TOSTRING_OFFSET))(this);
		}
	};
}
