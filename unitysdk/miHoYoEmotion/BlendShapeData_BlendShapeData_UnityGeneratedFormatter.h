#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19776A80)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19776A90)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x19776D00)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19776EF0)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19776E90)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeData_BlendShapeData_UnityGeneratedFormatter_TypeDefinitionIndex = 37777;

	class BlendShapeData_BlendShapeData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::miHoYoEmotion::BlendShapeData>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BlendShapeData_BlendShapeData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x29230);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(BlendShapeData_BlendShapeData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x29238);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BlendShapeData_BlendShapeData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x29240);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::miHoYoEmotion::BlendShapeData& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::miHoYoEmotion::BlendShapeData& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BlendShapeData&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BLENDSHAPEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
