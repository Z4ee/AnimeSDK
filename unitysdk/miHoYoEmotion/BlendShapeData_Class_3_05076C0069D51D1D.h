#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D025DB0)
#define MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1D025DC0)
#define MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D_WRITE_OFFSET UNITYSDK_OFFSET(0x1D025FE0)
#define MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D026190)
#define MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D026130)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeData_Class_3_05076C0069D51D1D_TypeDefinitionIndex = 40002;

	class BlendShapeData_Class_3_05076C0069D51D1D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::miHoYoEmotion::BlendShapeData>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(BlendShapeData_Class_3_05076C0069D51D1D_TypeDefinitionIndex)->GetStaticField(0x2C820);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BlendShapeData_Class_3_05076C0069D51D1D_TypeDefinitionIndex)->GetStaticField(0x2C828);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BlendShapeData_Class_3_05076C0069D51D1D_TypeDefinitionIndex)->GetStaticField(0x2C830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::miHoYoEmotion::BlendShapeData& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::miHoYoEmotion::BlendShapeData& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BlendShapeData&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_CLASS_3_05076C0069D51D1D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
