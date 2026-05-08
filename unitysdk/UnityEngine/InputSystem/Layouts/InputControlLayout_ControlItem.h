#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem_Flags.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NameAndParameters.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NamedValue.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/PrimitiveValue.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x99CC10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x99CCF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_BIT_OFFSET UNITYSDK_OFFSET(0x99CC90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x99CD10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3E0610)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x99CE00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x906570)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x99CCD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x99CE60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET UNITYSDK_OFFSET(0x99CE30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISMODIFYINGEXISTINGCONTROL_OFFSET UNITYSDK_OFFSET(0x99CD70)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISNOISY_OFFSET UNITYSDK_OFFSET(0x99CDA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0x99CDD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x3819B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x99CD50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x99CD30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2E1000)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x99CC70)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x99CC30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x99CC50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x3AA1D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x99CCB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x9642C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_USESTATEFROM_OFFSET UNITYSDK_OFFSET(0x3A4CE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x777D20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_MERGE_OFFSET UNITYSDK_OFFSET(0x99CE70)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ALIASES_OFFSET UNITYSDK_OFFSET(0x99CC20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x99CD00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_BIT_OFFSET UNITYSDK_OFFSET(0x99CCA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x99CD20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x792C40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x99CE10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x906580)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x99CCE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET UNITYSDK_OFFSET(0x99CE40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISMODIFYINGEXISTINGCONTROL_OFFSET UNITYSDK_OFFSET(0x99CD80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISNOISY_OFFSET UNITYSDK_OFFSET(0x99CDB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0x99CDE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x3819C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x99CD60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x99CD40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0x2E1100)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x99CC80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x99CC40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x99CC60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x99CBF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x99CCC0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_USAGES_OFFSET UNITYSDK_OFFSET(0x99CC00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_USESTATEFROM_OFFSET UNITYSDK_OFFSET(0x7163F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x777D30)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_ControlItem_TypeDefinitionIndex = 29321;

	struct alignas(8) InputControlLayout_ControlItem
	{
		::UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField; // 0x20
		::UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField; // 0x30
		::System::String* _useStateFrom_k__BackingField; // 0x40
		::System::String* _displayName_k__BackingField; // 0x48
		::System::String* _shortDisplayName_k__BackingField; // 0x50
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField; // 0x58
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField; // 0x68
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField; // 0x78
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField; // 0x88
		::System::UInt32 _offset_k__BackingField; // 0x98
		::System::UInt32 _bit_k__BackingField; // 0x9C
		::System::UInt32 _sizeInBits_k__BackingField; // 0xA0
		::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField; // 0xA4
		::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem_Flags _flags_k__BackingField; // 0xA8
		::System::Int32 _arraySize_k__BackingField; // 0xAC
		::UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField; // 0xB0
		::UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField; // 0xC0
		::UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField; // 0xD0

		::UnityEngine::InputSystem::Utilities::InternedString get_name()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::UnityEngine::InputSystem::Utilities::InternedString value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::InternedString get_layout()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_LAYOUT_OFFSET))(this);
		}

		::System::Void set_layout(::UnityEngine::InputSystem::Utilities::InternedString value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_LAYOUT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::InternedString get_variants()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_VARIANTS_OFFSET))(this);
		}

		::System::Void set_variants(::UnityEngine::InputSystem::Utilities::InternedString value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_VARIANTS_OFFSET))(this, value);
		}

		::System::String* get_useStateFrom()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_USESTATEFROM_OFFSET))(this);
		}

		::System::Void set_useStateFrom(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_USESTATEFROM_OFFSET))(this, value);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_shortDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_SHORTDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_shortDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_SHORTDISPLAYNAME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_USAGES_OFFSET))(this);
		}

		::System::Void set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_USAGES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ALIASES_OFFSET))(this);
		}

		::System::Void set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ALIASES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_PARAMETERS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> get_processors()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_PROCESSORS_OFFSET))(this);
		}

		::System::Void set_processors(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_PROCESSORS_OFFSET))(this, value);
		}

		::System::UInt32 get_offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_offset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_OFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_bit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_BIT_OFFSET))(this);
		}

		::System::Void set_bit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_BIT_OFFSET))(this, value);
		}

		::System::UInt32 get_sizeInBits()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_SIZEINBITS_OFFSET))(this);
		}

		::System::Void set_sizeInBits(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_SIZEINBITS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_FORMAT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem_Flags get_flags()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem_Flags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem_Flags))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Int32 get_arraySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ARRAYSIZE_OFFSET))(this);
		}

		::System::Void set_arraySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ARRAYSIZE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue get_defaultState()
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_DEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_DEFAULTSTATE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue get_minValue()
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_MINVALUE_OFFSET))(this);
		}

		::System::Void set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_MINVALUE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue get_maxValue()
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_MAXVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_isModifyingExistingControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISMODIFYINGEXISTINGCONTROL_OFFSET))(this);
		}

		::System::Void set_isModifyingExistingControl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISMODIFYINGEXISTINGCONTROL_OFFSET))(this, value);
		}

		::System::Boolean get_isNoisy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISNOISY_OFFSET))(this);
		}

		::System::Void set_isNoisy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISNOISY_OFFSET))(this, value);
		}

		::System::Boolean get_isSynthetic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISSYNTHETIC_OFFSET))(this);
		}

		::System::Void set_isSynthetic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISSYNTHETIC_OFFSET))(this, value);
		}

		::System::Boolean get_dontReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_DONTRESET_OFFSET))(this);
		}

		::System::Void set_dontReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_DONTRESET_OFFSET))(this, value);
		}

		::System::Boolean get_isFirstDefinedInThisLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET))(this);
		}

		::System::Void set_isFirstDefinedInThisLayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_SET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET))(this, value);
		}

		::System::Boolean get_isArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_GET_ISARRAY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem Merge(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem other)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEM_MERGE_OFFSET))(this, other);
		}
	};
}
