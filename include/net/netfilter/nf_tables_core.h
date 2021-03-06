#ifndef _NET_NF_TABLES_CORE_H
#define _NET_NF_TABLES_CORE_H

int nf_tables_core_module_init(void);
void nf_tables_core_module_exit(void);

int nft_immediate_module_init(void);
void nft_immediate_module_exit(void);

struct nft_cmp_fast_expr {
	u32			data;
	enum nft_registers	sreg:8;
	u8			len;
};

extern const struct nft_expr_ops nft_cmp_fast_ops;

int nft_cmp_module_init(void);
void nft_cmp_module_exit(void);

int nft_lookup_module_init(void);
void nft_lookup_module_exit(void);

int nft_bitwise_module_init(void);
void nft_bitwise_module_exit(void);

int nft_byteorder_module_init(void);
void nft_byteorder_module_exit(void);

struct nft_payload {
	enum nft_payload_bases	base:8;
	u8			offset;
	u8			len;
	enum nft_registers	dreg:8;
};

extern const struct nft_expr_ops nft_payload_fast_ops;

int nft_payload_module_init(void);
void nft_payload_module_exit(void);

#endif /* _NET_NF_TABLES_CORE_H */
