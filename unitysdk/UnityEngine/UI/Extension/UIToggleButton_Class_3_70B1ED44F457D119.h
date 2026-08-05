#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1DA710)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F1DA720)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119_WRITE_OFFSET UNITYSDK_OFFSET(0x1F1DA8C0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1DAA20)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1DA9E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_Class_3_70B1ED44F457D119_TypeDefinitionIndex = 56065;

	class UIToggleButton_Class_3_70B1ED44F457D119 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UIToggleButton*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(UIToggleButton_Class_3_70B1ED44F457D119_TypeDefinitionIndex)->GetStaticField(0x3DDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UIToggleButton*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIToggleButton*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UIToggleButton*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIToggleButton*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_CLASS_3_70B1ED44F457D119_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
