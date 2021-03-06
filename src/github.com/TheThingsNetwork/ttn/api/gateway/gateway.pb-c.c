/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/ttn/api/gateway/gateway.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/TheThingsNetwork/ttn/api/gateway/gateway.pb-c.h"
void   gateway__gpsmetadata__init
                     (Gateway__GPSMetadata         *message)
{
  static Gateway__GPSMetadata init_value = GATEWAY__GPSMETADATA__INIT;
  *message = init_value;
}
size_t gateway__gpsmetadata__get_packed_size
                     (const Gateway__GPSMetadata *message)
{
  assert(message->base.descriptor == &gateway__gpsmetadata__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t gateway__gpsmetadata__pack
                     (const Gateway__GPSMetadata *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &gateway__gpsmetadata__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t gateway__gpsmetadata__pack_to_buffer
                     (const Gateway__GPSMetadata *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &gateway__gpsmetadata__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Gateway__GPSMetadata *
       gateway__gpsmetadata__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Gateway__GPSMetadata *)
     protobuf_c_message_unpack (&gateway__gpsmetadata__descriptor,
                                allocator, len, data);
}
void   gateway__gpsmetadata__free_unpacked
                     (Gateway__GPSMetadata *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &gateway__gpsmetadata__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   gateway__rx_metadata__init
                     (Gateway__RxMetadata         *message)
{
  static Gateway__RxMetadata init_value = GATEWAY__RX_METADATA__INIT;
  *message = init_value;
}
size_t gateway__rx_metadata__get_packed_size
                     (const Gateway__RxMetadata *message)
{
  assert(message->base.descriptor == &gateway__rx_metadata__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t gateway__rx_metadata__pack
                     (const Gateway__RxMetadata *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &gateway__rx_metadata__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t gateway__rx_metadata__pack_to_buffer
                     (const Gateway__RxMetadata *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &gateway__rx_metadata__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Gateway__RxMetadata *
       gateway__rx_metadata__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Gateway__RxMetadata *)
     protobuf_c_message_unpack (&gateway__rx_metadata__descriptor,
                                allocator, len, data);
}
void   gateway__rx_metadata__free_unpacked
                     (Gateway__RxMetadata *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &gateway__rx_metadata__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   gateway__tx_configuration__init
                     (Gateway__TxConfiguration         *message)
{
  static Gateway__TxConfiguration init_value = GATEWAY__TX_CONFIGURATION__INIT;
  *message = init_value;
}
size_t gateway__tx_configuration__get_packed_size
                     (const Gateway__TxConfiguration *message)
{
  assert(message->base.descriptor == &gateway__tx_configuration__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t gateway__tx_configuration__pack
                     (const Gateway__TxConfiguration *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &gateway__tx_configuration__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t gateway__tx_configuration__pack_to_buffer
                     (const Gateway__TxConfiguration *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &gateway__tx_configuration__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Gateway__TxConfiguration *
       gateway__tx_configuration__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Gateway__TxConfiguration *)
     protobuf_c_message_unpack (&gateway__tx_configuration__descriptor,
                                allocator, len, data);
}
void   gateway__tx_configuration__free_unpacked
                     (Gateway__TxConfiguration *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &gateway__tx_configuration__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   gateway__status__osmetrics__init
                     (Gateway__Status__OSMetrics         *message)
{
  static Gateway__Status__OSMetrics init_value = GATEWAY__STATUS__OSMETRICS__INIT;
  *message = init_value;
}
void   gateway__status__init
                     (Gateway__Status         *message)
{
  static Gateway__Status init_value = GATEWAY__STATUS__INIT;
  *message = init_value;
}
size_t gateway__status__get_packed_size
                     (const Gateway__Status *message)
{
  assert(message->base.descriptor == &gateway__status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t gateway__status__pack
                     (const Gateway__Status *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &gateway__status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t gateway__status__pack_to_buffer
                     (const Gateway__Status *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &gateway__status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Gateway__Status *
       gateway__status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Gateway__Status *)
     protobuf_c_message_unpack (&gateway__status__descriptor,
                                allocator, len, data);
}
void   gateway__status__free_unpacked
                     (Gateway__Status *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &gateway__status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor gateway__gpsmetadata__field_descriptors[4] =
{
  {
    "time",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Gateway__GPSMetadata, has_time),
    offsetof(Gateway__GPSMetadata, time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "latitude",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__GPSMetadata, has_latitude),
    offsetof(Gateway__GPSMetadata, latitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "longitude",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__GPSMetadata, has_longitude),
    offsetof(Gateway__GPSMetadata, longitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "altitude",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Gateway__GPSMetadata, has_altitude),
    offsetof(Gateway__GPSMetadata, altitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gateway__gpsmetadata__field_indices_by_name[] = {
  3,   /* field[3] = altitude */
  1,   /* field[1] = latitude */
  2,   /* field[2] = longitude */
  0,   /* field[0] = time */
};
static const ProtobufCIntRange gateway__gpsmetadata__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor gateway__gpsmetadata__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "gateway.GPSMetadata",
  "GPSMetadata",
  "Gateway__GPSMetadata",
  "gateway",
  sizeof(Gateway__GPSMetadata),
  4,
  gateway__gpsmetadata__field_descriptors,
  gateway__gpsmetadata__field_indices_by_name,
  1,  gateway__gpsmetadata__number_ranges,
  (ProtobufCMessageInit) gateway__gpsmetadata__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor gateway__rx_metadata__field_descriptors[9] =
{
  {
    "gateway_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__RxMetadata, gateway_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__RxMetadata, has_timestamp),
    offsetof(Gateway__RxMetadata, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Gateway__RxMetadata, has_time),
    offsetof(Gateway__RxMetadata, time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rf_chain",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__RxMetadata, has_rf_chain),
    offsetof(Gateway__RxMetadata, rf_chain),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "channel",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__RxMetadata, has_channel),
    offsetof(Gateway__RxMetadata, channel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "frequency",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Gateway__RxMetadata, has_frequency),
    offsetof(Gateway__RxMetadata, frequency),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rssi",
    32,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__RxMetadata, has_rssi),
    offsetof(Gateway__RxMetadata, rssi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "snr",
    33,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__RxMetadata, has_snr),
    offsetof(Gateway__RxMetadata, snr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gps",
    41,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Gateway__RxMetadata, gps),
    &gateway__gpsmetadata__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gateway__rx_metadata__field_indices_by_name[] = {
  4,   /* field[4] = channel */
  5,   /* field[5] = frequency */
  0,   /* field[0] = gateway_id */
  8,   /* field[8] = gps */
  3,   /* field[3] = rf_chain */
  6,   /* field[6] = rssi */
  7,   /* field[7] = snr */
  2,   /* field[2] = time */
  1,   /* field[1] = timestamp */
};
static const ProtobufCIntRange gateway__rx_metadata__number_ranges[5 + 1] =
{
  { 1, 0 },
  { 11, 1 },
  { 21, 3 },
  { 31, 5 },
  { 41, 8 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor gateway__rx_metadata__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "gateway.RxMetadata",
  "RxMetadata",
  "Gateway__RxMetadata",
  "gateway",
  sizeof(Gateway__RxMetadata),
  9,
  gateway__rx_metadata__field_descriptors,
  gateway__rx_metadata__field_indices_by_name,
  5,  gateway__rx_metadata__number_ranges,
  (ProtobufCMessageInit) gateway__rx_metadata__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor gateway__tx_configuration__field_descriptors[6] =
{
  {
    "timestamp",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__TxConfiguration, has_timestamp),
    offsetof(Gateway__TxConfiguration, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rf_chain",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__TxConfiguration, has_rf_chain),
    offsetof(Gateway__TxConfiguration, rf_chain),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "frequency",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Gateway__TxConfiguration, has_frequency),
    offsetof(Gateway__TxConfiguration, frequency),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "power",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Gateway__TxConfiguration, has_power),
    offsetof(Gateway__TxConfiguration, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "polarization_inversion",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Gateway__TxConfiguration, has_polarization_inversion),
    offsetof(Gateway__TxConfiguration, polarization_inversion),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "frequency_deviation",
    32,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__TxConfiguration, has_frequency_deviation),
    offsetof(Gateway__TxConfiguration, frequency_deviation),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gateway__tx_configuration__field_indices_by_name[] = {
  2,   /* field[2] = frequency */
  5,   /* field[5] = frequency_deviation */
  4,   /* field[4] = polarization_inversion */
  3,   /* field[3] = power */
  1,   /* field[1] = rf_chain */
  0,   /* field[0] = timestamp */
};
static const ProtobufCIntRange gateway__tx_configuration__number_ranges[3 + 1] =
{
  { 11, 0 },
  { 21, 1 },
  { 31, 4 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor gateway__tx_configuration__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "gateway.TxConfiguration",
  "TxConfiguration",
  "Gateway__TxConfiguration",
  "gateway",
  sizeof(Gateway__TxConfiguration),
  6,
  gateway__tx_configuration__field_descriptors,
  gateway__tx_configuration__field_indices_by_name,
  3,  gateway__tx_configuration__number_ranges,
  (ProtobufCMessageInit) gateway__tx_configuration__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor gateway__status__osmetrics__field_descriptors[6] =
{
  {
    "load_1",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__Status__OSMetrics, has_load_1),
    offsetof(Gateway__Status__OSMetrics, load_1),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_5",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__Status__OSMetrics, has_load_5),
    offsetof(Gateway__Status__OSMetrics, load_5),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "load_15",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__Status__OSMetrics, has_load_15),
    offsetof(Gateway__Status__OSMetrics, load_15),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cpu_percentage",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__Status__OSMetrics, has_cpu_percentage),
    offsetof(Gateway__Status__OSMetrics, cpu_percentage),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memory_percentage",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__Status__OSMetrics, has_memory_percentage),
    offsetof(Gateway__Status__OSMetrics, memory_percentage),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "temperature",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Gateway__Status__OSMetrics, has_temperature),
    offsetof(Gateway__Status__OSMetrics, temperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gateway__status__osmetrics__field_indices_by_name[] = {
  3,   /* field[3] = cpu_percentage */
  0,   /* field[0] = load_1 */
  2,   /* field[2] = load_15 */
  1,   /* field[1] = load_5 */
  4,   /* field[4] = memory_percentage */
  5,   /* field[5] = temperature */
};
static const ProtobufCIntRange gateway__status__osmetrics__number_ranges[4 + 1] =
{
  { 1, 0 },
  { 11, 3 },
  { 21, 4 },
  { 31, 5 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor gateway__status__osmetrics__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "gateway.Status.OSMetrics",
  "OSMetrics",
  "Gateway__Status__OSMetrics",
  "gateway",
  sizeof(Gateway__Status__OSMetrics),
  6,
  gateway__status__osmetrics__field_descriptors,
  gateway__status__osmetrics__field_indices_by_name,
  4,  gateway__status__osmetrics__number_ranges,
  (ProtobufCMessageInit) gateway__status__osmetrics__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor gateway__status__field_descriptors[16] =
{
  {
    "timestamp",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__Status, has_timestamp),
    offsetof(Gateway__Status, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Gateway__Status, has_time),
    offsetof(Gateway__Status, time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ip",
    11,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(Gateway__Status, n_ip),
    offsetof(Gateway__Status, ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "platform",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, platform),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contact_email",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, contact_email),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "description",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, description),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "region",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, region),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bridge",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, bridge),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "router",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, router),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gps",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, gps),
    &gateway__gpsmetadata__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rtt",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__Status, has_rtt),
    offsetof(Gateway__Status, rtt),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rx_in",
    41,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__Status, has_rx_in),
    offsetof(Gateway__Status, rx_in),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rx_ok",
    42,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__Status, has_rx_ok),
    offsetof(Gateway__Status, rx_ok),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tx_in",
    43,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__Status, has_tx_in),
    offsetof(Gateway__Status, tx_in),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tx_ok",
    44,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Gateway__Status, has_tx_ok),
    offsetof(Gateway__Status, tx_ok),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "os",
    51,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Gateway__Status, os),
    &gateway__status__osmetrics__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gateway__status__field_indices_by_name[] = {
  7,   /* field[7] = bridge */
  4,   /* field[4] = contact_email */
  5,   /* field[5] = description */
  9,   /* field[9] = gps */
  2,   /* field[2] = ip */
  15,   /* field[15] = os */
  3,   /* field[3] = platform */
  6,   /* field[6] = region */
  8,   /* field[8] = router */
  10,   /* field[10] = rtt */
  11,   /* field[11] = rx_in */
  12,   /* field[12] = rx_ok */
  1,   /* field[1] = time */
  0,   /* field[0] = timestamp */
  13,   /* field[13] = tx_in */
  14,   /* field[14] = tx_ok */
};
static const ProtobufCIntRange gateway__status__number_ranges[6 + 1] =
{
  { 1, 0 },
  { 11, 2 },
  { 21, 9 },
  { 31, 10 },
  { 41, 11 },
  { 51, 15 },
  { 0, 16 }
};
const ProtobufCMessageDescriptor gateway__status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "gateway.Status",
  "Status",
  "Gateway__Status",
  "gateway",
  sizeof(Gateway__Status),
  16,
  gateway__status__field_descriptors,
  gateway__status__field_indices_by_name,
  6,  gateway__status__number_ranges,
  (ProtobufCMessageInit) gateway__status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
